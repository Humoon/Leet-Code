#include<iostream>
#include<queue>
#include<cstdio>
using namespace std;

//队列求解 
class Solution {
public:
    vector<string> ans;
    vector<string> sList={"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"}; //字符表
    
    vector<string> letterCombinations(string digits) {
    	int size = digits.size();
    	if(size == 0) return {};
    	queue<string> Q;
    	for(int i=0; i<digits;i++){
    		int curN = digits[i];
    		string curS = sList[curN];
    		if(i==0){
    			for(int j=0; j<curS.size(); j++){
	    			Q.push(curS[j]);
				}
			}
			else{
				string fs = Q.front();
				while(fs.size() < (i+1)){
					Q.pop();
					for(int j=0; j<curS.size(); j++){
						Q.push_back(fs+s[j]);
					}
					fs = Q.front();
				}
			}
			while(!Q.empty()){
				ans.push_back(Q.front());
				Q.pop();
			}
			return ans;
		}
	}
}; 
 
//深度优先搜索 
class Solution {
public:
    vector<string> res;
    vector<string> num{"","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};//数字与字符串的映射
    vector<string> letterCombinations(string digits) {
      //深度优先搜索
      if(digits.size()==0)
        return res;
      dfs(digits,"",0);
      return res;
    }
    void dfs(string digits,string str,int start)
    {
        if(str.size()==digits.size())
        {
            res.push_back(str);
            return ;
        }
        for(int i=start;i<digits.size();i++)
          for(int j=0;j<num[digits[i]-'0'-1].size();j++)
             dfs(digits,str+num[digits[i]-'0'-1][j],i+1);
    }
};
    	
		
