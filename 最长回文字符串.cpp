#include <iostream>
#include <string>
#include <vector>
#include <stack>
#include <algorithm>
using namespace std;
string longestPalindrome(string s) {
    int start=0,length=0;
    for(int i=0,j=0,k=0;i<s.size()&&s.size()-i>length/2;i++,j=i,k=i)
    {
        while(j>0){if(s[j]==s[j-1]){j--;}else break;}
        while(k<s.size()-1){if(s[k]==s[k+1]){k++;i=k-1;}else break;}
        while(j>0&&k<s.size()-1){if(s[k+1]==s[j-1]){k++;j--;}else break;}
        if(length<k-j+1){length=k-j+1;start=j;}
    }
    return s.substr(start,length);
}

int main(){
	string s;
	cin>>s;
	string res = longestPalindrome(s);
	cout<<res<<endl;
	return 0;
}
