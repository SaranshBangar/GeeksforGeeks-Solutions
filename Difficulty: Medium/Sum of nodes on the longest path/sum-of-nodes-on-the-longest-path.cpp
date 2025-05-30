/*
class Node {
  public:
    int data;
    Node *left;
    Node *right;

    Node(int x) {
        data = x;
        left = NULL;
        right = NULL;
    }
}; */

class Solution {
  public:
    function<pair<int,int>(Node *)>dfs=[&](Node* node)->pair<int,int>
    {
        if(!node)
            return {0, 0};
        pair<int,int>left=dfs(node->left);
        pair<int,int>right=dfs(node->right);
        pair<int,int>ans;
        if(left.second>right.second)
            ans=left;
        else if(right.second>left.second)
            ans=right;
        else
        {
            ans.first=max(left.first, right.first);
            ans.second=left.second;
        }
        ans.first+=(node->data);
        ans.second++;
        return ans;
    };
    
    int sumOfLongRootToLeafPath(Node *root)
    {
        return dfs(root).first;
    }
};