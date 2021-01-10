#include <iostream>
#include <cstring>
#include <cstdio>
#include <algorithm>
#define de 10000
using namespace std;
 
int K,n;      //K��ʾ���ٿ����Ĺ��������nΪ�˵ĸ���
struct Node
{
    int left,right;
    bool operator<(Node p)        //�Զ���ȽϺ���
    {
        if(right!=p.right)        //���������Ҷ˵��С�����˳��������Ȱ���˵�Ӵ�С��˳������
            return right<p.right; 
        else return left>p.left;
    }
};
Node p[1005];
int vis[20005];
 
 
void solve()
{
     int i,j,cnt=0,num;
     for(i=0;i<n;i++)
     {
         if((p[i].right-p[i].left+1<=K))          //������䳤��С��K������������������Ҫ�Ź����
         {
             for(j=p[i].left;j<=p[i].right;j++)   //��������˵�������Ҷ˵㣬δ���ʹ���+1����Ϊ���ʹ�
             {
                 if(vis[j]==0)
                 {
                     vis[j]=1;
                     cnt++;
                 }
             }
         }
         else                                     //���䳤�ȴ���K 
         {
             num=0;                             
             for(j=p[i].left;j<=p[i].right;j++)   //�ȴ�������˵㵽�Ҷ˵㣬�����Ѿ��ŵĹ������num
             {
                 if(vis[j]==1)
                    num++;
             }
             if(num<K)                            //num�����涨��K��
             for(j=p[i].right;j>=p[i].left;j--)   //�������Ҷ˵㵽��˵㣬û���ʵķŹ���ƣ���num==kʱ����
             {
                 if(vis[j]==0)
                 {
                     num++;
                     cnt++;
                     vis[j]=1;
                 }
                 if(num>=K) break;
             }
         }
     }
     cout<<cnt<<endl;
     for(i=0;i<20005;i++)                         
        if(vis[i]==1)
         cout<<i-10000<<endl;                     //ע���������i-10000
 
}
 
 
int main()
{
    int i,j,m,left,right;
    cin>>m;
 
    for(i=0;i<m;i++)
    {
        cin>>K>>n;
        for(j=0;j<n;j++)
        {
            cin>>left>>right;
            if(left>right)
            {
                left=left+right;
                right=left-right;
                left=left-right;
            }
            p[j].left=left+de;                 //+10000��֤�����ڵ�������������vis���ڷ���
            p[j].right=right+de;
        }
        sort(p,p+n);            
        solve();
        memset(vis,0,sizeof(vis));
        if(i!=m-1) cout<<endl;
    }
    return 0;
}
