/*
class Node {
public:
    int data;
    Node *left, *right;

    Node(int val) {
        data = val;
        left = right = nullptr;
    }
};
*/
class Solution {
  public:
    bool isSame(Node * r1, Node * r2){
        if((r1 == nullptr) ^ (r2 == nullptr))
            return 0;
        
        return (r1 == nullptr) or (r1 -> data == r2 -> data);
    }
    bool isSymmetric(Node* root)
    {
        if(!root)
            return 1;
            
        queue<pair<Node *, Node *>> q;
        q.push({root -> left, root -> right});
        
        bool ok = 1;
        
        while(ok and !q.empty()){
            Node * left, * right;
            tie(left, right) = q.front();
            q.pop();
            
            ok = ok and isSame(left, right);
            
            if(ok and left){
                q.push({left -> left, right -> right});
                q.push({left -> right, right -> left});
            }
        }
        
        return ok;
    }
};