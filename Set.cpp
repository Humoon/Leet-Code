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
	st.insert(0); //�����Զ����յ����������� 
	set<int>::iterator it;
	for(it=st.begin(); it!=st.end();it++){
		cout<<*it;
	}
	cout<<endl;
	
	it = st.find(3); //find���ص����� 
	cout<<*it; 
	return 0;
}
