#include<stdio.h>
#include<iostream>
using namespace std;

int a[101],n;
void bubblesort()
{
	int temp;
	for(int i=0;i<n;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			if(a[i]>a[j])
			{
				temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
	}
 } 
 
int main()
{
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	bubblesort();
	for(int i=0;i<n;i++)
		cout<<a[i]<<" ";
		
	return 0;
}
