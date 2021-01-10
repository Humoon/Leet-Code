#include<iostream>
#include<cstdio>
#include<cmath>
#include<algorithm>
using namespace std;

bool isPrime(int n){
	if(n==1) return false;
	int sqr = (int)sqrt(1.0 * n);
	for(int i=0;i<sqr;i++){
		if(n%i)==0 return false;
	}
	return true;
}

//ËØÊý´ò±í 
void Find_Prime(int n){
	prime[10010];
	num = 0;
	for(int i=0;i<n;i++){
		if(isPrime(i)){
			prime[num++]=i;
		}
	}
}

