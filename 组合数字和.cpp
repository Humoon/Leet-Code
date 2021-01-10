#include<vector>

vector<int> path;
vector<vector<int> > res;
vector<int> candidates;
void DFS(int start, int target){
	if(target==0){
		res.push_back(path);
		return ;
	}
	for(int i=start; i<candidates.size() && candidates[i] <= target; i++){
		path.push_back(candidates[i]);//对当前路径进行扩展 
		DFS(i, target-candidates[i]);
		path.pop_back();//不影响后面path 
	}
} 

vector<vector<int> > cimbinationSum(vector<int>& candidates, int target){
	sort(candidates.begin(), candidates.end());
	this->candidates = candidates;//重要 
	DFS(0, target);
	
	return res;
}
