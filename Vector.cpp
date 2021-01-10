#include<cstdio>
#include<algorithm>
#include<vector>
#include<iostream>
using namespace std;

int main(){
	vector<int> vi;
	for(int i=0;i<5;i++){
		vi.push_back(i);
	}
	for(int i=0;i<vi.size();i++){
		cout<<vi[i]<<" ";
	}
	cout<<endl;
	for(vector<int>::iterator it = vi.begin(); it != vi.end(); it++){
		cout<<*it<<" ";
	}
	cout<<endl;
	vector<int>::iterator it=vi.begin();
	for(int i=0;i<vi.size();i++){
		cout<<*(it+i)<<" ";
	}
	cout<<endl;
	return 0;
}
