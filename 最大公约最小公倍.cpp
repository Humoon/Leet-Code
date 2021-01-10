#include<iostream>
#include<cstdio>
#include<cmath>
#include<algorithm>
using namespace std;

int gcd(int a, int b){
	return b == 0 ? a : gcd(b, a % b);
}

int gcd1(int x,int y){
   while(x!=y){
       if(x>y) x=x-y;
        else
        y=y-x;
   }
   return x;
	}
   //辗转相除法
//最小公倍数=两数乘积*最大公约数
int main(){
	vector<int>::iterator it;
	
	int x=15;
	int y= 12;
	cout<<gcd(x,y)<<endl;
	return 0;
	
	
}
