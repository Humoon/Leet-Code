//#include<iostream>
//#include<stdio.h>
//#include<string.h>
//#include<vector>
//#include<set>
//#include<algorithm>
//#include<cmath>
//using namespace std;
//
//int main()
//{
//	int T;
//	cin>>T;
//	while(T--){
//		double A, B, C;
//		double ans = 0.0;
//		cin>>A>>B>>C;
//		double delta = (2.0*B*C-2.0*A)*(2.0*B*C-2.0*A) - 4.0*B*B*C*C;
//		if(delta <= 0.0){
//			ans = 0.0;
//		}
//		else{
//			double x1 = -(2.0*B*C-2.0*A) + sqrt(delta) / (2.0*B*B);
//			double x2 = -(2.0*B*C-2.0*A) - sqrt(delta) / (2.0*B*B);
//			if(x2 < x1) swap(x1, x2);
//			cout<<x1<<" "<<x2<<endl;
//			double step = 0.00001;
//			for(double x=0.0; x<x1; x+=step){
//				ans += 2.0*sqrt(2.0*A*x) * step;
//			}
//			for(double x=x1; x<x2;x+=step){
//				ans += (sqrt(2.0*A*x) - (B*x+C)) * step; 
//			}
////			for(double x=0.0; x<= x1; x+=step){
////				ans += 2.0*sqrt(2.0*A*x) * step;
////			}
////			for(double x=x1+step; x<=x2; x+=step){
////				ans += sqrt(2.0*A*x) * step;
////			}
//////			ans = ans + ()
////			ans = ans - (x2 - x1) * sqrt(2.0*A*x2) *0.5;
//		}
//		cout<<ans;
//	}
//	return 0;
//}


#include <iostream>
#include <vector>
#include <algorithm>
 
using namespace std;
 
//const int N = 510;
//vector<int> dp[N];
//int n;
// 
// 
//vector<int> add(vector<int> a, vector<int> b)
//{
//    vector<int> c;
//    int t = 0;
//    for (int i = 0; i < a.size() || i < b.size(); i ++)
//    {
//      if (i < a.size()) t += a[i];
//      if (i < b.size()) t += b[i];
//      c.push_back(t % 10);
//      t /= 10;
//    }
//    if (t) c.push_back(t);
//    return c;
//}
// 
//int main()
//{
//    cin >> n;
//    dp[0] = vector<int> (1, 1);
//    for (int i = 1; i <= n; i ++)
//    {
//        dp[i] = dp[i - 1];
//        if (i >= 3) dp[i] = add(dp[i], dp[i - 3]);
//    }
//    for (int i = dp[n].size() - 1; i >= 0; i --) cout << dp[n][i];
//    return 0;
//}
