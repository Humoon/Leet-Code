#include <iostream>
#include<cmath>
using namespace std;
int queenPos[100];
void NQueen(int n,int N);
int main()
{
    int N;
    cout<<"������N��ֵ��";
    cin>>N;
    NQueen(0,N);
    return 0;
}
void NQueen(int n,int N)
{
    if(n==N)//ִ����ϣ�������
    {
        for(int i=0;i<N;i++)
        {
            cout<<queenPos[i]+1<<"   ";
        }
        cout<<endl;
        return;
    }
    for(int i=0;i<N;i++)//һ��һ�г���
    {
        int j;
        for(j=0;j<n;j++)
        {
            if(queenPos[j]==i||abs(queenPos[j]-i)==abs(n-j))//����ͬ�����߶Խ�
                break;
        }
        if(j==n)
        {
            queenPos[n]=i;
            NQueen(n+1,N);
        }
    }
}
