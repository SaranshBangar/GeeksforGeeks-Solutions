/*
class Node {
  public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = NULL;
        right = NULL;
    }
};
*/

class Solution {
  public:
  
  void del(Node * nd){
      if(nd == NULL)return;
      del(nd->left);
      del(nd->right);
      delete nd;
  }
  void traverse(Node* &nd , int l , int r){
      if(nd == NULL )return;
      if(nd->data <l){del(nd->left); Node* temp = nd->right;delete nd ;nd = temp;traverse(nd , l,r);return;}
      if(nd->data >r){del(nd->right);Node* temp = nd->left;delete nd; nd = temp;traverse(nd, l,r);return;}
      traverse(nd->left , l,r);
      traverse(nd->right,l,r);
  }
    Node* removekeys(Node* root, int l, int r) {
        // code here
        traverse(root , l ,r);
        return root;
        
    }
};