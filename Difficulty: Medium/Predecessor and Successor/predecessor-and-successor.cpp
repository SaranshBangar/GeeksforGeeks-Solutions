//{ Driver Code Starts
// C++ program to find predecessor and successor in a BST
#include "bits/stdc++.h"
using namespace std;

// BST Node
class Node {
  public:
    int data;
    Node* left;
    Node* right;

    Node(int x) {
        data = x;
        left = NULL;
        right = NULL;
    }
};


// } Driver Code Ends

/* BST Node
class Node
{
   public:
    int data;
    Node *left;
    Node *right;

    Node(int x){
        data = x;
        left = NULL;
        right = NULL;
    }
}; */

class Solution {
  public:
    void pre(Node* root, int key, Node* &pred)
    {
        if(!root)
            return;
        if((root->data) < key)
        {
            pred = root;
            pre(root->right, key, pred);
            return;
        }
        else
        {
            pre(root->left, key, pred);
            return;            
        }
        return;
    }
    
    void suc(Node* root, int key, Node* &succs)
    {
        if(!root)
            return;
        if(root->data > key)
        {
            succs = root;
            suc(root->left, key, succs);
            return;
        }
        else
        {
            suc(root->right, key, succs);
            return;
        }
        
        return;
    }
    
  
    vector<Node*> findPreSuc(Node* root, int key)
    {
        Node* pred = NULL;
        Node* succs = NULL;
        
        pre(root, key, pred);
        suc(root, key, succs);
        
        return {pred, succs};
    }
};


//{ Driver Code Starts.

Node* buildTree(string str) {
    // Corner Case
    if (str.length() == 0 || str[0] == 'N')
        return NULL;

    // Creating vector of strings from input
    // string after spliting by space
    vector<string> ip;

    istringstream iss(str);
    for (string str; iss >> str;)
        ip.push_back(str);

    // Create the root of the tree
    Node* root = new Node(stoi(ip[0]));

    // Push the root to the queue
    queue<Node*> queue;
    queue.push(root);

    // Starting from the second element
    int i = 1;
    while (!queue.empty() && i < ip.size()) {

        // Get and remove the front of the queue
        Node* currNode = queue.front();
        queue.pop();

        // Get the current node's value from the string
        string currVal = ip[i];

        // If the left child is not null
        if (currVal != "N") {

            // Create the left child for the current node
            currNode->left = new Node(stoi(currVal));

            // Push it to the queue
            queue.push(currNode->left);
        }

        // For the right child
        i++;
        if (i >= ip.size())
            break;
        currVal = ip[i];

        // If the right child is not null
        if (currVal != "N") {

            // Create the right child for the current node
            currNode->right = new Node(stoi(currVal));

            // Push it to the queue
            queue.push(currNode->right);
        }
        i++;
    }

    return root;
}

// Driver program to test above functions
int main() {

    int t;
    string tc;
    getline(cin, tc);
    t = stoi(tc);
    while (t--) {
        string s;
        getline(cin, s);
        Node* root = buildTree(s);
        getline(cin, s);
        int key = stoi(s);

        Solution ob;
        vector<Node*> result = ob.findPreSuc(root, key);
        Node* pre = result[0];
        Node* suc = result[1];

        if (pre != nullptr)
            cout << pre->data << " ";
        else
            cout << -1 << " ";

        if (suc != nullptr)
            cout << suc->data << endl;
        else
            cout << -1 << endl;
        cout << "~" << endl;
    }
    return 0;
}
// } Driver Code Ends