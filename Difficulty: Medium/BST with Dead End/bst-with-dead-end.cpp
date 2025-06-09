/*The Node structure is
class Node
{
    int data;
    struct Node *left;
    struct Node *right;

    Node(int x){
        data = x;
        left = NULL;
        right = NULL;
    }
};*/

class Solution {
  public:
    bool helper(Node * node, int MIN, int MAX)
    {
        if(!node)
            return 0;
        if(node -> data == MIN and node -> data == MAX)
            return 1;
        return helper(node -> left, MIN, node -> data - 1) or helper(node -> right, node -> data + 1, MAX);    
    }
    
    bool isDeadEnd(Node *root)
    {
        return helper(root, 1, 1e8);
    }
};