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


void step_p(int &x, int &y, int d, int p, int n){
	if(d == 0){
		if(y - p >= 0){
			y -= p;
		}
		else y = 0;
	}
	else if(d == 1){
		if(x - p >= 0){
			x -= p;
		}
		else x = 0;
	}
	else if(d == 2){
		if(y+p > n){
			y = n-1;
		}
		else y += p;
	}
	else if(d == 3){
		if(x + p > n){
			x = n-1;
		}
		else x += p;
	}
}


int main(){
	int t, n, m;
	cin>>t;
	int cs = 0;
	while(t--){
		cs ++;
		cout<<"Case #"<<cs<<":"<<endl;
		cin>>n>>m;
		char s;
		int p;
		int d = 0;
		int x =0, y=0;
		for(int i=0; i<m; i++){
			cin>>s;
			if(s == 'L' || s == 'R'){
				if(s == 'L'){
					if(d == 3){
						d = 0;
					}else d += 1;
				}
				else if(s == 'R'){
					if(d == 0){
						d = 3;
					}
					else d -= 1;
				}
			}
			else if(s == 'G'){
				cin>>p;
				step_p(x, y, d, p, n);
			}
			else if(s == 'P'){
				cout<<x<<" "<<y<<endl;
			}
		}
	}
	return 0;
}

