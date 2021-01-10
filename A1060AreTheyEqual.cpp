#include<cstdio>
#include<iostream>
#include<string>
#include<cstdlib>
using namespace std;

int n;
string deal(string s, int& e){
	int k=0;
	while(s.length()>0 && s[0]=='0'){
		s.erase(s.begin());
	}
	if(s[0] == '.'){
		s.erase(s.begin());
		while(s.length() > 0 && s[0] == '0'){
			s.erase(s.begin());
			e--;
		}
	}
	else{
		while(k < s.length() && s[k] != '.'){
			k++;
			e++;
		}
		if(k<s.length()){
			s.erase(s.begin()+k);
		}
	}
	if(s.length() == 0){
		e = 0;
	}
	int num = 0;
	k = 0;
	string res;
	while(num < n){
		if(k<s.length()) res+=s[k++];
		else res += '0';
		num ++;
	}
	return res;
}
//int main(){
//	string s1,s2,s3,s4;
//	cin>>n>>s1>>s2;
//	int e1=0, e2=0;
//	s3 = deal(s1, e1);
//	s4 = deal(s2, e2);
//	if(s3==s4 and e1==e2){
//		cout<<"YES 0."<<s3<<"*10^"<<e1<<endl;
//	}
//	else{
//		cout<<"NO 0."<<s3<<"*10^"<<e1<<" 0."<<s4<<"*10^"<<e2<<endl;
//	}
//	return 0;
//}

int main(){
	string s = "134e-22";
	int a=3;
	s += (a+'0');
	cout<<s<<endl;
	cout<<s.substr(4,s.length()-4)<<endl;
	string nums = "-2";
	double n = atof(nums.c_str());
	cout<<n<<endl;
	
	double num = 12.32;
	string ans =  to_string(num);
	cout<<ans<<endl;
//	cout<<s[1]-'0'<<endl;l
	return 0;
	
}
/*
3 12300 12358.9
*/
