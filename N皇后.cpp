#include <iostream>
#include<cmath>
using namespace std;
int queenPos[100];
void NQueen(int n,int N);
int main()
{
    int N;
    cout<<"请输入N的值：";
    cin>>N;
    NQueen(0,N);
    return 0;
}
void NQueen(int n,int N)
{
    if(n==N)//执行完毕，输出结果
    {
        for(int i=0;i<N;i++)
        {
            cout<<queenPos[i]+1<<"   ";
        }
        cout<<endl;
        return;
    }
    for(int i=0;i<N;i++)//一列一列尝试
    {
        int j;
        for(j=0;j<n;j++)
        {
            if(queenPos[j]==i||abs(queenPos[j]-i)==abs(n-j))//列相同，或者对角
                break;
        }
        if(j==n)
        {
            queenPos[n]=i;
            NQueen(n+1,N);
        }
    }
}
