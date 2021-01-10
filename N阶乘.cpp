#include<iostream>
#include<cstdio>
using namespace std;

int F(int n)
{
	if(n == 1) return 1;
	else return F(n-1) * n;
}
int main()
{
	int n;
	cin>>n;
	cout<<n<<"! = "<<F(n)<<endl;
	return 0;
}
