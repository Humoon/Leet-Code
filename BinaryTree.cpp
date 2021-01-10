
#include<iostream>
#include<cstdio>
#include<vector>
#include<string>
using namespace std;

struct TreeNode{
    char val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(char x) : val(x), left(NULL), right(NULL) {}
};

TreeNode* build(vector<char> preorder, vector<char> inorder, int root, int start, int end){
    if(start>end) return NULL;
    TreeNode* tree = new TreeNode(preorder[root]);
    int i = start;
    while(i<end && preorder[root] != inorder[i]) i++;
    tree->left = build(preorder, inorder, root+1, start, i-1);
    tree->right = build(preorder, inorder, i-start+1+root, i+1, end);
    return tree;
}
void post(TreeNode* head, vector<char>& postorder){
    if(head == NULL) return ;
    post(head->left, postorder);
    post(head->right, postorder);
    postorder.push_back(head->val);
}
int main(){
    vector<char> pre;
    vector<char> in;
    vector<char>postorder;
    string s1, s2;
    cin>>s1>>s2;
    for(int i=0; i<s1.length(); i++){
        pre.push_back(s1[i]);
    }
    for(int i=0; i<s2.length(); i++){
        in.push_back(s2[i]);
    }
    TreeNode* head = build(pre, in, 0, 0, pre.size()-1);
    post(head, postorder);
    for(int i=0; i<postorder.size(); i++){
        cout<<postorder[i];
    }
    return 0;
}
