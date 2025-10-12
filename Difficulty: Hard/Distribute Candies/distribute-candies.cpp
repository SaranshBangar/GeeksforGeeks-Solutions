/*
class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int x) {
        data = x;
        left = right = nullptr;
    }
};
*/

class Solution {
  public:
    int solve(Node* root, int& moves)
    {
        if (!root)
            return 0;
    
        int left=solve(root->left, moves);
        int right=solve(root->right, moves);
        moves+=abs(left)+abs(right);
        return root->data-1+left+right;
    }
    int distCandy(Node* root)
    {
        int moves=0;
        solve(root, moves);
        return moves;
    }
};