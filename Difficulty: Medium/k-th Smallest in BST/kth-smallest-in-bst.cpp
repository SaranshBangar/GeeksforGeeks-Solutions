/*
class Node {
  public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};
*/

class Solution {
  public:
    vector<int>ans;
    vector<int>func(Node *root)
    {
        if (root!=nullptr)
        {
            func(root->left);
            ans.push_back(root->data);
            func(root->right);
        }
        return ans;
    }
    int kthSmallest(Node *root, int k)
    {
        vector<int>v=func(root);
        if (k>v.size())
            return -1;
        else return v[k-1];
    }
};