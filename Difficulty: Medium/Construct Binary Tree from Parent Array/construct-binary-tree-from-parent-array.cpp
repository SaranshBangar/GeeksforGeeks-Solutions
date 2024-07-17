//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    struct Node* left;
    struct Node* right;

    Node(int x) {
        data = x;
        left = right = NULL;
    }
};

void sort_and_print(vector<int>& v) {
    sort(v.begin(), v.end());
    for (int i = 0; i < v.size(); i++)
        cout << v[i] << " ";
    v.clear();
}

void printLevelOrder(struct Node* root) {
    vector<int> v;
    queue<Node*> q;

    q.push(root);

    Node* next_row = NULL;

    while (!q.empty()) {
        Node* n = q.front();
        q.pop();

        if (n == next_row) {
            sort_and_print(v);
            next_row = NULL;
        }

        v.push_back(n->data);

        if (n->left) {
            q.push(n->left);
            if (next_row == NULL)
                next_row = n->left;
        }

        if (n->right) {
            q.push(n->right);
            if (next_row == NULL)
                next_row = n->right;
        }
    }
    sort_and_print(v);
}

Node* createTree(int parent[], int n);

/* Driver program to test above function*/


// } Driver Code Ends
/* node structure  used in the program

struct Node
{
    int data;
    struct Node* left;
    struct Node* right;

    Node(int x){
        data = x;
        left = right = NULL;
    }
}; */

class Solution {
  public:
    // Function to construct binary tree from parent array.
    Node *createTree(vector<int> parent) {
        unordered_map<int, int> leftMap, rightMap;
        Node* root = nullptr;

        for(int i=0; i<parent.size(); i++) {
            leftMap[parent[i]] = -1;
            rightMap[parent[i]] = -1;
            leftMap[i] = -1;
            rightMap[i] = -1;
        }

        for(int i=0; i<parent.size(); i++) {
            if(parent[i] == -1) {
                root = new Node(i);
                continue;
            }

            if(leftMap[parent[i]] == -1)
                leftMap[parent[i]] = i;
            else
                rightMap[parent[i]] = i;
        }

        helper(root, leftMap, rightMap);

        return root;
    }
    private:
    void helper(Node* &root, unordered_map<int, int> &leftMap, unordered_map<int, int> &rightMap) {
        if(!root)   return;

        if(leftMap[root->data] != -1) {
            root->left = new Node(leftMap[root->data]);
        }
        if(rightMap[root->data] != -1) {
            root->right = new Node(rightMap[root->data]);
        }

        if(root->left)  helper(root->left, leftMap, rightMap);
        if(root->right) helper(root->right, leftMap, rightMap);
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a;
        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;
            a.push_back(x);
        }

        Solution ob;

        Node* res = ob.createTree(a);

        printLevelOrder(res);
        cout << endl;
    }

    return 0;
}

// } Driver Code Ends