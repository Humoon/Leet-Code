#include <iostream>
#include <cstdio>
#include <string>
#include <vector>
#include <algorithm>
#include <string>
#include <set>
#include <stack>
#include <cmath>
#include <cstring>
#include <iomanip>
using namespace std;
			
long long res_maxl(string s){
	long long maxl = 1;
	for(int i=0; i<s.length(); i++){
		long long curl = 1;
		bool flag = false;
		long long j = i+1;
		while(j < s.length()){
			if(s[i] == s[j]){
				curl += 1;
				j += 1;
			}
			else{
				if(!flag){
					curl += 1;
					j += 1;
					flag = true;
				}
				else break;
			}
		}
		maxl = max(maxl, curl);
	}
	return maxl;
}

int main(){
	long long M;
	string s;
	cin>>M;
	while(M--){
		cin>>s;
		string res="";
		long long maxl = 1;
		for(int i=s.length()-1; i>=0; i--){
			res += s[i];
		}
		maxl = max(res_maxl(s), res_maxl(res));
		cout<<maxl<<endl;
	}
	return 0;
}

/*
4
21111
111112
121213333

*/
