//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// Tree Node
struct Node {
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
    if (str.length() == 0 || str[0] == 'N') return NULL;

    // Creating vector of strings from input
    // string after spliting by space
    vector<string> ip;

    istringstream iss(str);
    for (string str; iss >> str;) ip.push_back(str);

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
        if (i >= ip.size()) break;
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

void inOrder(Node *root) {
    if (!root) return;
    inOrder(root->left);
    cout << root->data << " ";
    inOrder(root->right);
}



// } Driver Code Ends
/* Tree node structure  used in the program
 struct Node
 {
     int data;
     Node* left, *right;
}; */

class Solution{
  public:
    int func(vector<int>&level)
    {
        int sum=0;
        for (int i=0;i<level.size();i++)
        {
            sum+=level[i];
        }
        return sum;
    }
    int maxLevelSum(Node* root)
    {
        int maximum=INT_MIN;
        if (root==nullptr)
            return 0;
        queue<Node*>q;
        q.push(root);
        while (!q.empty())
        {
            int size=q.size();
            vector<int>level;
            for (int i=0;i<size;i++)
            {
                Node* node=q.front();
                q.pop();
                if (node->left)
                    q.push(node->left);
                if (node->right)
                    q.push(node->right);
                level.push_back(node->data);
            }
            maximum=max(func(level), maximum);
        }
        return maximum;
    }
};


//{ Driver Code Starts.
int main() {
    int tc;
    scanf("%d ", &tc);
    while (tc--) {
        string treeString;
        getline(cin, treeString);
        Solution obj;
        Node *root = buildTree(treeString);
        cout << obj.maxLevelSum(root) << "\n";
    }
    return 0;
}
// } Driver Code Ends