#include<stdio.h>
#include<bits/stdc++.h>
#define ll long long int
#define met(a) memset(a,0,sizeof(a))
#define fup(i,a,n,b) for(int i=a;i<n;i+=b)
#define fow(j,a,n,b) for(int j=a;j>0;j-=b)
using namespace std;
const int maxn = 1e6 + 7;
int main(int argc, char *argv[]) {
	int n,ans=1,maxx=0;
	scanf("%d", &n);
	for (int i = 2; i <= n; i++) {
		int tmp = i, tmp1 = 1, tmp2 = 0;
		while (tmp % 2 == 0)tmp /= 2;
		while (tmp % 5 == 0)tmp /= 5;
		if (tmp == 1)tmp2 = 0;
		else {
			do {
				tmp1 = tmp1 * 10 % tmp;
				++tmp2;
			} while (tmp1 != 1);
		}
		if (tmp2 > maxx) {
			maxx = tmp2;
			ans = i;
		}
	}
	printf("%d\n", ans);
	return 0;
}
