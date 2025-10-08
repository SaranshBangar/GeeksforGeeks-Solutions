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
};
*/

class Solution {
  public:
    int find(int x,int s, int e, vector<int> &post){
        for(int i = s;i<=e;i++){
            if(post[i]==x) return i;
        }
        return -1;
    }
    Node* solve(vector<int> &pre, vector<int> &post, int &preIdx, int s, int e){
        if(preIdx>pre.size() || s>e) return NULL;
        
        Node* root = new Node(pre[preIdx++]);
        
        if (s == e || preIdx >= pre.size())
            return root;

        int i = find(pre[preIdx], s, e, post);
        if (i != -1) {
            root->left = solve(pre, post, preIdx, s, i);
            root->right = solve(pre, post, preIdx, i + 1, e - 1);
        }
        return root;
    }
    Node *constructTree(vector<int> &pre, vector<int> &post) {
        int preIdx = 0;
        
         return solve(pre, post, preIdx, 0, post.size() - 1);
    }
};