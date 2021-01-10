class Solution {
public:
    string longestPalindrome(string s) {
        int len = s.size();
        if(len == 0) return "";
        if(len == 1) return s;
        vector<vector<bool>> dp(len, vector<bool>(len));
        int start = 0;//三步更新
        int lmax = 1;
        for(int i=0; i<len; i++){
            dp[i][i] = 1;
            if(i<len-1){
                if(s[i] == s[i+1]){
                    dp[i][i+1] = 1;
                    start = i;//
                    lmax = 2;
                }
            }
        }
        for(int l=3; l <= len; l++){
            for(int left=0; left+l-1<len; left++){
                int right=left+l-1;
                if(s[left] == s[right] && dp[left+1][right-1]==1){
                    dp[left][right] = 1;
                    if(l > lmax){
                        lmax = l;
                        start = left;
                    }
                }
            }
        }
        return s.substr(start, lmax);
    }
};
