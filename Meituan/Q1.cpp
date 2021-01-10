//import sys
//if __name__ == '__main__':
//    t = int(sys.stdin.readline().strip())
//    for i in range(t):
//    	line = sys.stdin.readline().strip()
//    	value = list(map(float, line.split()))
//    	a = float(value[0])
//    	b = float(value[1])
//    	c = float(value[2])
//    	d = float(value[3])
//    	res = float(a/3 *(d**3 - c**3) + 0.5*(d**2 - c**2) + b*(d-c))
//    	print('%.6f'%ret)




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
		if(y <= p){
			y -= p;
		}
		else y = 0;
	}
	else if(d == 1){
		if(x <= p){
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
					s += 1;
				}
				else if(s == 'R'){
					s -= 1;
				}
			}
			else if(s == 'G'){
				cin>>p;
				step_n(x, y, d, p, n);
			}
			else if(s == 'P'){
				cout<<x<<" "<<y<<endl;
			}
		}
	}
	return 0;
}

//double area(double a, double b, double c, double d){
//	return a*(d*d*d - c*c*c) / 3.0 + (d*d-c*c)/2.0 + b*(d-c);
//}
//
//int main(){
//	int t;
//	while(cin>>t){
//		int a, b, c, d;
//		for(int i=0; i<t; i++){
//			cin>>a>>b>>c>>d;
//			cout<<setprecision(7)<<area(a,b,c,d)<<endl;
//		}
//	}
//	return 0;
//} 

//const int N = 1e9+7;
//
//long long jiechen(int n){
//	if(n==0) return 1; 
//	if(n==1) return 1;
//	if(n==2) return 2;
//	return n*jiechen(n-1)*(n-2);
//}

//int main(){
//	long long n;
//	cin>>n;
//	long long res = 0;
//	for(int i=1; i<=n; i++){
//		long cur = 1;
//		for(int j=1; j<=i; j++){
//			cur *= (n-j+1);
//		}
//		long long cut = jiechen(i-1);
//		cur /= cut;
//		res += cur;
//		res %= N;
//	}
//	cout<<res<<endl;
//	return 0;
////	long long res = (n * pow(2, n-1)) ;
////	cout<<res % N<<endl;
////	return 0;
//}
//const int N = 1e5+10;
//vector<int> mp[N];
//int son[N];
//int main(){
//	int n, m;
//	while(cin>>n>>m){
//		for(int i=0; i<n; i++){
//			mp[i].clear();
//		}
//		memset(son, 0, sizeof(son));
//		for(int i=0; i<m; i++){
//			int u, v;
//			cin>>u>>v;
//			u--; v--;
//			mp[u].push_back(v);
//			mp[v].push_back(u);
//		}
//		for(int i=0; i<n; i++){
//			if(mp[i].size()==1){
//				for(int j=0; j<mp[i].size(); j++){
//					son[mp[i][j]] ++;
//				}
//			}
//		}
//		long long ans = 0;
//		long long L = 1;
//		for(int i=0; i <n; i++){
//			if(son[i] > 1){
//				ans += L*(son[i]-1) * son[i] / 2;
//			}
//		}
//		cout<<ans<<endl;
//	}
//	
//	return 0;
//}
//	if(s.length() >= 1){
//		st.push(s[cont++]);
//	}
//	while(cont < s.length()){
//		if(st.top() == ')' || st.top() == ']' || st.top() == '}'){
//			st.pop();
//			res += 1;
//		}
//		if(!st.empty()){
//			if(s[cont] == ')' && st.top() == '('){
//				st.pop();
//			}
//			else if(s[cont] == ']' && st.top() == '['){
//				st.pop();
//			}
//			else if(s[cont] == '}' && st.top() == '{'){
//				st.pop();
//			}
//			else st.push(s[cont]);
//		}
//		else{
//			st.push(s[cont]);
//		}
//		cont ++;
//	}
//	while(!st.empty()){
//		cout<<st.top()<<endl;
//		st.pop();
//	}
//	cout<<res<<endl;

//
//struct node{
//	int val; 
//	int x, y;
//};
//
//bool cmp(node a, node b){
//	if(a.val == b.val){
//		if(a.x == b.x){
//			return a.y < b.y;
//		}
//		else{
//			return a.x < b.x;
//		}
//	}
//	return a.val > b.val;
//}
//
//void deal_vis(vector<node> res, vector<vector<int> > &vis, int x, int y){
//	vis[x][y] = 1;
//	for(int i=0; i<res.size(); i++){
//		if(vis[res[i].x][res[i].y] == 0){
//			if(res[i].x == x || res[i].y == y){
//				vis[res[i].x][res[i].y] = 1;
//			}
//		}
//	}
//}
//
//void add_sum(int T, vector<node> & res, vector<vector<int> > nums, vector<vector<int> > &vis){
//	for(int i=0; i<T; i++){
//		for(int j=0; j<T; j++){
//			int sum = 0;
//			node cur_node;
//			for(int col=0; col<T; col++){
//				if(vis[i][col] == 0){
//					sum += nums[i][col];
//				}
//			}
//			for(int row=0; row<T; row++){
//				if(vis[row][j] == 0){
//					sum += nums[row][j];
//				}
//			}
//			sum -= nums[i][j];
//			cur_node.val = sum;
//			cur_node.x = i; 
//			cur_node.y = j;
//			res.push_back(cur_node);
//		}
//	}
//}
//
//int main(){
//    int T, temp;
//    cin>>T;
//    vector<vector<int> > nums;
//    for(int i=0; i<T; i++){
//    	vector<int> cur;
//    	for(int j=0; j<T; j++){
//    		cin>>temp;
//    		cur.push_back(temp);
//		}
//		nums.push_back(cur);
//	}
//	vector<vector<int> > vis(T, vector<int>(T, 0));
//	int pox, poy;
//	for(int i=0; i<T; i++){
//		vector<node> res;
//		add_sum(T, res, nums, vis);
//		sort(res.begin(), res.end(), cmp);
//		if(i==0){
//			pox = res[0].x;
//			poy = res[0].y;
//			cout<<pox+1<<" "<<poy+1<<endl;
//		}
//
//		else{
//			for(int j=0; j<res.size(); j++){
//				if(vis[res[j].x][res[j].y] == 0){
//					pox = res[j].x;
//					poy = res[j].y;
//					cout<<pox+1<<" "<<poy+1<<endl;
//					break;
//				}
//			}
//		}
//		for(int j=0; j<res.size(); j++){
//			cout<<"("<<res[j].x<<","<<res[j].y<<")"<<"-"<<" ";
//		}
//		cout<<endl;
//		deal_vis(res, vis, pox, poy);
//	}
//	
//    return 0;
//}

/*
3
1 0 0
0 10 10
0 10 10

*/
