#include<iostream>
#include<cstdio>
#include<cmath>
#include<algorithm>
using namespace std;

int radix_Trans(int n, int radix){
	int res[10010];
	int len = 0;
	do{
		res[len++] = n % radix;
		n /= radix;
	}while(n != 0);
	//进制转换结果存储在res 
	for(int i=0;i<len;i++){
		cout<<res[i];
	} 
	cout<<endl;
	for(int i=0;i<len;i++){
		n = n * radix + res[i];
	}
	return n;
} 

int main(){
	int n=23;
	int radix = 8;
	cout<<radix_Trans(n, radix);
	return 0;
}
