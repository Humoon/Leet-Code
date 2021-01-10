//class Solution {
//public:
//    int maxProfit(vector<int>& prices){
//        vector<int> sta;
//        prices.push_back(-1);
//        int maxn = 0;
//        for(int i=0;i<prices.size();i++){
//            while(!sta.empty() && sta.back() > prices[i]){//维护单调栈
//                maxn = max(maxn, sta.back() - sta.front());//维护最大值
//                sta.pop_back();
//            }
//            sta.push_back(prices[i]);
//        }
//        return maxn;
//    }
//};
#include <iostream>
#include <vector>
#include <algorithm>
 
using namespace std;
 
const int N = 510;
vector<int> dp[N];
int n;
 
 
vector<int> add(vector<int> a, vector<int> b)
{
    vector<int> c;
    int t = 0;
    for (int i = 0; i < a.size() || i < b.size(); i ++)
    {
      if (i < a.size()) t += a[i];
      if (i < b.size()) t += b[i];
      c.push_back(t % 10);
      t /= 10;
    }
    if (t) c.push_back(t);
    return c;
}
 
int main()
{
    cin >> n;
    dp[0] = vector<int> (1, 1);
    for (int i = 1; i <= n; i ++)
    {
        dp[i] = dp[i - 1];
        if (i >= 3) dp[i] = add(dp[i], dp[i - 3]);
    }
    for (int i = dp[n].size() - 1; i >= 0; i --) cout << dp[n][i];
    return 0;
}
