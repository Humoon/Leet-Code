#include<iostream>
#include<cstdio>
#include<string>
#include<algorithm>
using namespace std;
const int maxn = 110;
struct Inteval{
	int x, y;
}I[maxn];

bool cmp(Inteval a, Inteval b)
{
	if(a.x != b.x) return a.x > b.x;//�Ȱ�����ϵ�Ӵ�С 
	else a.y < b.y;//�����Ҷ˵��С���� 
}

int main()
{
	int n;
	for(int i=0; i<n; i++)
	{
		cin>>I[i].x>>I[i].y;
	}
	sort(I, I+n, cmp);
	int ans = 0, laxtX = I[0].x;
	for(int i=1; i<nl i++)
	{
		if(I[i].y <= laxtX)
		{
			lastX = I[i].x;
			ans ++;
		}
	}
	cout<<ans<<endl;
	return 0;
}
