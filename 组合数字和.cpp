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
		path.push_back(candidates[i]);//�Ե�ǰ·��������չ 
		DFS(i, target-candidates[i]);
		path.pop_back();//��Ӱ�����path 
	}
} 

vector<vector<int> > cimbinationSum(vector<int>& candidates, int target){
	sort(candidates.begin(), candidates.end());
	this->candidates = candidates;//��Ҫ 
	DFS(0, target);
	
	return res;
}
