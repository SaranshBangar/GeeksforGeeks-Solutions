//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// A Tree node
struct Node {
    int data;
    struct Node *left, *right;
};

// Utility function to create a new node
Node* newNode(int data) {
    Node* temp = new Node;
    temp->data = data;
    temp->left = temp->right = NULL;
    return (temp);
}

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
    Node* root = newNode(stoi(ip[0]));

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
            currNode->left = newNode(stoi(currVal));

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
            currNode->right = newNode(stoi(currVal));

            // Push it to the queue
            queue.push(currNode->right);
        }
        i++;
    }

    return root;
}


// } Driver Code Ends
// User function Template for C++

/*// A Tree node
struct Node
{
    int data;
    struct Node *left, *right;
};*/

class Solution {
public:
    void inorder(Node *root, vector<int> &in) {
        if(root) {
            inorder(root->left, in);
            in.push_back(root->data);
            inorder(root->right, in);
        }
    }
    
    int merge(int low, int mid, int high, vector<int> &v) {
        int i = low, j = mid + 1, k = 0, n = high - low + 1, count = 0;
        vector<int> temp(n);
        
        while(i <= mid and j <= high) {
            if(v[i] <= v[j]) {
                temp[k++] = v[i++];
            } else {
                count += mid - i + 1;
                temp[k++] = v[j++];
            }
        }
        
        while(i <= mid)
            temp[k++] = v[i++];
            
        while(j <= high)
            temp[k++] = v[j++];
            
        for(i = low, k = 0; k < n; k++, i++)
            v[i] = temp[k];
            
        return count;
    }
    
    int mergeSort(int low, int high, vector<int> &in) {
        int count = 0;
        
        if(low < high) {
            int mid = low + (high - low) / 2;
            count += mergeSort(low, mid, in);
            count += mergeSort(mid + 1, high, in);
            count += merge(low, mid, high, in);
        }
        
        return count;
    }

    int pairsViolatingBST(int n, Node *root) {
        vector<int> in;
        inorder(root, in);
        return mergeSort(0, in.size() - 1, in);
    }
};


//{ Driver Code Starts.

int main() {

    int t;
    cin >> t;
    getchar();

    while (t--) {

        int n;
        cin >> n;
        getchar();

        string inp;
        getline(cin, inp);

        struct Node* root = buildTree(inp);

        Solution ob;
        int ans = ob.pairsViolatingBST(n, root);
        cout << ans << endl;
    }

    return 0;
}
// } Driver Code Ends