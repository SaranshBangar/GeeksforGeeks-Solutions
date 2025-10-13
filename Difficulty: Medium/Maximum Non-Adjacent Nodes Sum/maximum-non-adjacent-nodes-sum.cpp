/*
class Node {
public:
    int data;
    Node* left;
    Node* right;
    Node(int val) {
        data = val;
        left = nullptr;
        right = nullptr;
    }
};
*/

class Solution {
  public:
  int solve(unordered_map<Node* ,int> &dp,  Node *root)
     {
        if(root == NULL) return 0;
        if(dp[root]) return dp[root];
        int take = root->data;
        if(root->left)
        {
            take += solve(dp, root->left->left);
            take += solve(dp, root->left->right);
        }
        if(root->right)
        {
            take += solve(dp, root->right->left);
            take += solve(dp, root->right->right);
        }
        int add = solve(dp, root->left) + solve(dp, root->right);
        return dp[root] = max(take,add);
    }
    
    
    int getMaxSum(Node *root)
    {
        unordered_map<Node*,int>dp;
        return solve(dp,root);
    }
};