/*
class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int x) {
        data = x;
        left = right = NULL;
    }
};
*/

class Solution {
  public:
    vector <int> bottomView(Node *root) 
    {
        map<int, int> mp;
        queue<pair<Node *,int>>q;
        q.push({root, 0});
        while(!q.empty())
        {
            Node *curr=q.front().first;
            int pos=q.front().second;
            q.pop();
            mp[pos]=curr->data;
            if(curr->left)
                q.push({curr->left, pos-1});
            if(curr->right)
                q.push({curr->right, pos+1});
        }
        vector<int> ans;
        for(auto &it:mp)
            ans.push_back(it.second);
        return ans;
    }
};