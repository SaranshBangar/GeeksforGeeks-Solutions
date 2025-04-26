//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// Tree Node
class Node {
  public:
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};

// Function to Build Tree
Node *buildTree(string str) {
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
    Node *root = new Node(stoi(ip[0]));

    // Push the root to the queue
    queue<Node *> queue;
    queue.push(root);

    // Starting from the second element
    int i = 1;
    while (!queue.empty() && i < ip.size()) {

        // Get and remove the front of the queue
        Node *currNode = queue.front();
        queue.pop();

        // Get the current Node's value from the string
        string currVal = ip[i];

        // If the left child is not null
        if (currVal != "N") {

            // Create the left child for the current Node
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

            // Create the right child for the current Node
            currNode->right = new Node(stoi(currVal));

            // Push it to the queue
            queue.push(currNode->right);
        }
        i++;
    }

    return root;
}


// } Driver Code Ends

// User Function template for C++

// Structure of node
/*class Node {
   public:
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};*/

class Solution {
    pair<int,bool> solve(Node* tree,bool &cut)
    {
        if(!tree) return {0,1};
        
        int d = tree->data;
        if(tree->left && tree->right){
            if(tree->left -> data <= d && tree->right->data <= d){
                pair<int,bool> l = solve(tree->left,cut);
                pair<int,bool> r = solve(tree->right,cut);
                
                if(l.second && r.second)
                    if(l.first == r.first || l.first-1 == r.first) return {l.first+1,1};
            }
        }
        else if(tree->left && !tree->right && !cut && tree->left->data <= d){
             cut= 1;
             pair<int,bool> l = solve(tree->left,cut);
             if(l.second && l.first==1){
                 return {l.first+1,1};
             } 
        } else if(!tree->left && !tree->right){
            return {1,1};
        } 
        return {0,0};
    }
    
  public:
    bool isHeap(Node* tree)
    {
        bool cut = 0;
        return solve(tree,cut).second;
    }
};


//{ Driver Code Starts.

int main() {
    int tc;
    scanf("%d ", &tc);
    while (tc--) {
        string treeString;
        getline(cin, treeString);
        Solution ob;
        Node *root = buildTree(treeString);
        if (ob.isHeap(root))
            cout << "true" << endl;
        else
            cout << "false" << endl;

        cout << "~"
             << "\n";
    }

    return 0;
}
// } Driver Code Ends