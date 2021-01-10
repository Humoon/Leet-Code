#include<cstdio>
#include<string>
#include<algorithm>
#include<map>
#include<set> 
#include<iostream>
using namespace std;

int main(){
	map<string, int> mp;
	mp["tom"] = 1;
	mp["any"]=2;
	map<string, int>::iterator it = mp.find("tom");
//	cout<<it->first;
//	cout<<it->second;
	if(it->second > 100)
	{
		cout<<"tome"<<endl;
	}
	else{
		cout<<"ne"<<endl;
	}
	set<string> se;
	se.insert("tom");
	se.insert("allice");
	if(se.count("tom")){
		cout<<"IN - "<<se.count("tom")<<endl;
	}
	else
	{
		cout<<"NOT IN"<<endl;
	}
	return 0;
	
}
