//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    struct Node *next;

    Node(int x)
    {
        data = x;
        next = NULL;
    }
};

void printList(Node *node)
{
    while (node != NULL)
    {
        cout << node->data << " ";
        node = node->next;
    }
    cout << endl;
}

struct Node *inputList()
{
    int n; // length of link list
    scanf("%d ", &n);

    int data;
    cin >> data;
    struct Node *head = new Node(data);
    struct Node *tail = head;
    for (int i = 0; i < n - 1; ++i)
    {
        cin >> data;
        tail->next = new Node(data);
        tail = tail->next;
    }
    return head;
}


// } Driver Code Ends
//User function Template for C++

/*
Definition for singly Link List Node
struct Node
{
    int data;
    struct Node *next;

    Node(int x)
    {
        data = x;
        next = NULL;
    }
};
*/


class Solution
{
    public:
    Node *reverse(Node *head, int k)
    {
        if (head==nullptr || k<1)
            return head;
        int len=0;
        Node* current=head;
        while (current!=nullptr)
        {
            len++;
            current=current->next;
        }
        Node* prev=nullptr;
        Node* nextNode=nullptr;
        current=head;
        int count=0;
        while (count<k && current!=nullptr)
        {
            nextNode=current->next;
            current->next=prev;
            prev=current;
            current=nextNode;
            count++;
        }
        if (nextNode!=nullptr)
            head->next=reverse(current, len-k);
        return prev;
    }
};


//{ Driver Code Starts.


int main()
{
    int t;
    cin >> t;
    while (t--)
    {

        struct Node *head = inputList();
        int k;
        cin >> k;

        Solution obj;
        Node *res = obj.reverse(head, k);

        printList(res);
    }
}
// } Driver Code Ends