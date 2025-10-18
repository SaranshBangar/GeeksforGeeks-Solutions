/*
class Node {
  public:
    int data;
    Node* left;
    Node* right;
    Node(int val) {
        data = val;
        left = right = nullptr;
    }
};
*/

class Solution {
    int cnt=0;
    int ans=0;
  public:
    int findMedian(Node* root) {
        // Code here
        int nodes=count_node(root);
        cnt=(nodes&1)?(nodes+1)>>1:nodes>>1;
        
        inorder(root);
        
        return ans; 
    }
    void inorder(Node* R)
    {
        if(R)
        {
            inorder(R->left);
            --cnt;
            if(cnt==0)
            {
                ans=R->data;
                return;
            }
            inorder(R->right);
        }
    }
    int count_node(Node* R)
    {
        if(!R) return 0;
        return 1+(count_node(R->left)+count_node(R->right));
    }
};