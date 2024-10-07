//{ Driver Code Starts
#include <stdint.h>

#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    struct Node *npx;

    Node(int x) {
        data = x;
        npx = NULL;
    }
};

struct Node *XOR(struct Node *a, struct Node *b) {
    return (struct Node *)((uintptr_t)(a) ^ (uintptr_t)(b));
}

struct Node *insert(struct Node *head, int data);

vector<int> getList(struct Node *head);

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        struct Node *head = NULL;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;

        while (ss >> number) {
            head = insert(head, number);
        }

        vector<int> vec = getList(head);
        for (int x : vec)
            cout << x << " ";
        cout << endl;
        for (int i = vec.size() - 1; i >= 0; i--) {
            cout << vec[i] << " ";
        }
        cout << "\n";
    }
    return (0);
}

// } Driver Code Ends


/*
Structure of linked list is as
struct Node
{
    int data;
    struct Node* npx;

    Node(int x){
        data = x;
        npx = NULL;
    }
};

Utility function to get XOR of two Struct Node pointer
use this function to get XOR of two pointers
struct Node* XOR (struct Node *a, struct Node *b)
{
    return (struct Node*) ((uintptr_t) (a) ^ (uintptr_t) (b));
}
*/

// function should insert the data to the front of the list
struct Node *insert(struct Node *head, int data)
{
    if(head==NULL)
    {
        struct Node* nNode=new Node(data);
        nNode->npx=XOR(NULL,NULL);
        head=nNode;
        return head;
    }
    else
    {
        struct Node* nNode = new Node(data);
        nNode->npx=XOR(nNode->npx,head);
        head->npx=XOR(head->npx,XOR(nNode,NULL));
        head=nNode;
        return head;
    }
}

vector<int> getList(struct Node *head)
{
    vector<int> ans;
    struct Node* p =NULL;
    struct Node* prev=NULL;
    struct Node* temp = head;
    while(temp)
    {
        ans.push_back(temp->data);
        prev=temp;
        temp=XOR(temp->npx,p);
        p=prev;
    }
    return ans;
}