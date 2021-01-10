#include<cstdio>
#include<iostream>
#include<algorithm>
#include<cstring>
#include<vector> 
using namespace std;

bool cmp(int a, int b){
	return a > b;
}

int main(){
	vector<int> vec = {1, 3, 2, 5, 4};
	sort(vec.begin(), vec.end(), cmp);
	
	for(int x:vec){
		cout<<x<<endl;
	}
	int a[6]={1,2,3,4,5,6};
	int b[6];
	reverse(a,a+4);
	reverse(a+4,a+6);
	reverse(a,a+6);
	reverse_copy(a,a+6,b);
//	for(int i=0;i<6;i++){
//		cout<<a[i]<<" ";
//	}
	
	string str="www.baidu.com";
//	reverse(str.begin(), str.end());
//	cout<<str.substr(4);
	str.find("w");//从头开始找 
	str.rfind("w");//从尾部开始找 
	string str1 = str.substr(2,5);//从2开始5个字符 
//	cout<<str1;
	return 0;
}
