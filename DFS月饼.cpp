#include<iostream>
#include<cstdio>
using namespace std;
const int maxn = 30;
int n, V, maxValue = 0;
int w[maxn], c[maxn];

void DFS(int index, int sumW, int sumC)
{
	if(index == n){
		if(sumW <= V && sumC > maxValue){
			maxValue = sumC;
		}
		return ;
	}
	DFS(index+1, sumW+w[index], sumC+c[index]);
	DFS(index+1, sumW, sumC);
}

void DFS1(int index, int sumW, int sumC)
{
	if(index == n){
		return ;
	}
	DFS(index+1, sumW, sumC);
	if(sumW + w[index] <= V){
		if(sumC + c[index] > maxValue){
			maxValue = sumC + c[index];
		}
		DFS(index+1, sumW+w[index], sumC+c[index]);
	}
}
/*
5 8
3 5 1 2 2
4 5 2 1 3
*/

int main()
{
	cin>>n>>V;
	for(int i=0; i<n; i++){
		cin>>w[i];
	}
	for(int i=0; i<n; i++){
		cin>>c[i];
	}
	DFS1(0,0,0);
	cout<<maxValue<<endl;
	return 0;
}
