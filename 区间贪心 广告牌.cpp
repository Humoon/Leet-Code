#include <iostream>
#include <cstring>
#include <cstdio>
#include <algorithm>
#define de 10000
using namespace std;
 
int K,n;      //K表示最少看到的广告牌数，n为人的个数
struct Node
{
    int left,right;
    bool operator<(Node p)        //自定义比较函数
    {
        if(right!=p.right)        //按照区间右端点从小到大的顺序排序，相等按左端点从大到小的顺序排序
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
         if((p[i].right-p[i].left+1<=K))          //如果区间长度小于K，则区间内所有数都要放广告牌
         {
             for(j=p[i].left;j<=p[i].right;j++)   //从区间左端点遍历到右端点，未访问过的+1，设为访问过
             {
                 if(vis[j]==0)
                 {
                     vis[j]=1;
                     cnt++;
                 }
             }
         }
         else                                     //区间长度大于K 
         {
             num=0;                             
             for(j=p[i].left;j<=p[i].right;j++)   //先从区间左端点到右端点，计算已经放的广告牌数num
             {
                 if(vis[j]==1)
                    num++;
             }
             if(num<K)                            //num不够规定的K个
             for(j=p[i].right;j>=p[i].left;j--)   //从区间右端点到左端点，没访问的放广告牌，当num==k时跳出
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
         cout<<i-10000<<endl;                     //注意输出的是i-10000
 
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
            p[j].left=left+de;                 //+10000保证区间内的数都是整数，vis便于访问
            p[j].right=right+de;
        }
        sort(p,p+n);            
        solve();
        memset(vis,0,sizeof(vis));
        if(i!=m-1) cout<<endl;
    }
    return 0;
}
