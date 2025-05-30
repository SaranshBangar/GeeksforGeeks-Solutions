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
    vector<int>vec;
    void func1(Node* root)
    {
        if (root)
        {
            func1(root->left);
            vec.push_back(root->data);
            func1(root->right);
        }
    }
    int func2(int n)
    {
        int low=0, high=vec.size(), ans=-1;
        while (low<high)
        {
            int mid=(low+(high-low)/2);
            if (vec[mid]==n)
                return vec[mid];
            else if (vec[mid]<n)
            {
                ans=vec[mid];
                low=mid+1;
            }
            else high=mid;
        }
        return ans;
    }
    int findMaxFork(Node* root, int n)
    {
        vec.clear();
        func1(root);
        int ans=func2(n);
        return ans;
    }
};