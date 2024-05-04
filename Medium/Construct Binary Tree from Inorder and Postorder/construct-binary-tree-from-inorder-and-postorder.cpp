//{ Driver Code Starts
/* program to construct tree using inorder and postorder traversals */
#include <bits/stdc++.h>
using namespace std;

/* A binary tree node has data, pointer to left child
   and a pointer to right child */
struct Node {
    int data;
    struct Node* left;
    struct Node* right;

    Node(int x) {
        data = x;
        left = right = NULL;
    }
};

/* This funtcion is here just to test buildTreeUtil() */
void preOrder(Node* node) {
    if (node == NULL) return;

    /* then print the data of node */
    printf("%d ", node->data);

    /* first recur on left child */
    preOrder(node->left);

    /* now recur on right child */
    preOrder(node->right);
}


// } Driver Code Ends
/* Tree node structure

struct Node
{
    int data;
    struct Node* left;
    struct Node* right;

    Node(int x){
        data = x;
        left = right = NULL;
    }
};*/

class Solution {
    public:
    int search(int arr[], int start, int end, int value) {
        int i;
        for (i = start; i <= end; i++)
            if (arr[i] == value)
                break;

        return i;
    }

    Node* build(int in[], int post[], int inStart, int inEnd, int* index) {
        // base case
        if(inStart > inEnd)
            return nullptr;

        // pick the current node from postorder traversal
        // and decrement the index pointer
        Node* nn = new Node(post[*index]); // new node
        (*index)--;

        // if this node has no children, then return new node
        if(inStart == inEnd)
            return nn;

        // else, find the index of this node in inorder travarsal
        int inIndex = search(in, inStart, inEnd, nn->data);

        // using index in Inorder traversal,
        // construct left and right subtrees
        nn->right = build(in, post, inIndex + 1, inEnd, index);
        nn->left = build(in, post, inStart, inIndex - 1, index);

        // finally return new node
        return nn;
    }

    //Function to return a tree created from postorder and inoreder traversals.
    Node *buildTree(int in[], int post[], int n) {
        int index = n-1;
        return build(in, post, 0, n-1, &index);
    }
};


//{ Driver Code Starts.

int main() {
    int t, n;
    cin >> t;
    while (t--) {
        cin >> n;
        int in[n], post[n];
        for (int i = 0; i < n; i++) cin >> in[i];
        for (int i = 0; i < n; i++) cin >> post[i];
        Solution obj;
        Node* root = obj.buildTree(in, post, n);
        preOrder(root);
        cout << endl;
    }
    return 0;
}

// } Driver Code Ends