/*
class Node {
  public:
    int data;
    Node* left;
    Node* right;

    Node(int value) {
        data = value;
        left = nullptr;
        right = nullptr;
    }
};*/

class Solution {
  public:
int sum(Node * rn)
    {
        return rn ? rn->data + sum(rn->left) + sum(rn->right) : 0;
    }
    void t(Node * rn, int &to)
    {
        if (!rn) return;
        t(rn->left, to);
        to -= rn->data;
        rn->data = to;
        t(rn->right, to);
    }
    void transformTree(Node *root) {
        // code here
        int to = sum(root);
        t(root, to);
    }
};