#include<cstdio>
#include<algorithm>
#include<vector>
#include<set>
#include<iostream>
using namespace std;

int main(){
	int a=10, b= 13; 
	set<int> st;
	for(int i=0;i<5;i++){
		if(i % 2 != 0) st.insert(i);
	}
	st.insert(2);
	st.insert(0); //插入自动按照递增进行排序 
	set<int>::iterator it;
	for(it=st.begin(); it!=st.end();it++){
		cout<<*it;
	}
	cout<<endl;
	
	it = st.find(3); //find返回迭代器 
	cout<<*it; 
	return 0;
}
