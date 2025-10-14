/*
class Node {
  public:
    int data;
    Node* left;
    Node* right;

    // Constructor to initialize a new node
    Node(int val) {
        data = val;
        left = NULL;
        right = NULL;
    }
};
*/

class Solution {
  public:
    int nodeSum(Node* root, int l, int r)
    {
        if(!root) return 0 ;
        int left = nodeSum(root->left,l,r);
        int right = nodeSum(root->right,l,r);
        if(l <= root->data && root->data <= r) return root->data + left + right;
        return left + right ;
    }
};
