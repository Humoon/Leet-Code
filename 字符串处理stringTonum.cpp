#include<cstdio>
#include<cstdlib>
#include<iostream>
#include<string>
#include<set>
using namespace std;

//string numTostring(string s){
//	int e;
//	int k =0;
//	while(k < s.length() && s[k] != '.'){
//		e++;
//		k++;
//	}
//	if(k < s.length()){
//		s.erase(s.begin() + k);//É¾³ýÐ¡Êýµã 
//	}
//	string res;
//	k = 0;
//	if(k<s.length()) res += s[k++];
//	res += 'e';
//	if(e<0){
//		res += '-';	}
//	res += (e + '0');//int -> char 
//	return res;
//}

double stringTonum(string s){
	int num=0;
	while(s.length() > 0 && s[0] == '0'){
		s.erase(s.begin());
	}
	int k = 0, t = 0, et = 0;
	while(k < s.length()){
		if(s[k] == '.'){
			t = k;
		}
		else if(s[k] == 'e' or s[k] == 'E'){
			et = k;
			break;
		}
		k++;
	}
	string nums, es;
	double ans;
	if(et==0){
		ans = atof(s.c_str());
	}
	else{
		nums = s.substr(0, et);
		es = s.substr(et+1, s.length()-et-1);
		double num1, num2;
		num1 = atof(nums.c_str());
		num2 = atof(es.c_str());
		double temp = 1;
		if(num2>0){
			while(num2--){
				temp *= 10;
			}
		}
		else{
			while(num2++){
				temp *= 0.1;
			}
		}
		ans = num1 * temp;
	}
	return ans;
}

void numTostring(double num){
	int e=0;
	if(num>10){
		while(num > 10){
			num /= 10.0;
			e ++;
//			cout<<e<<"-"<<num<<endl;
		}
	}
	else{
		while(num<10){
			num *= 10.0;
			cout<<num<<endl;
			e --;
		}
	}
	cout<<num<<"e"<<e<<endl;
}

int main(){
	string s1, s2;
	cin>>s1>>s2;
	double num1, num2;
	num1 = stringTonum(s1);
	num2 = stringTonum(s2);
//	cout<<num1<<" "<<num2<<endl;
	double sum = num1+num2;
//	cout<<sum<<endl;
	numTostring(sum);
	return 0;
}
