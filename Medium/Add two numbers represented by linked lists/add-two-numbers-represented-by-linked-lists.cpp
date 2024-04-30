//{ Driver Code Starts
// driver

#include <bits/stdc++.h>
using namespace std;

/* Linked list Node */
struct Node {
    int data;
    struct Node* next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

struct Node* buildList(int size)
{
    int val;
    cin>> val;
    
    Node* head = new Node(val);
    Node* tail = head;
    
    for(int i=0; i<size-1; i++)
    {
        cin>> val;
        tail->next = new Node(val);
        tail = tail->next;
    }
    
    return head;
}

void printList(Node* n)
{
    while(n)
    {
        cout<< n->data << " ";
        n = n->next;
    }
    cout<< endl;
}


// } Driver Code Ends
/* node for linked list:

struct Node {
    int data;
    struct Node* next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

*/

class Solution
{
    public:
    
    void reverse(struct Node** head)
    {
        struct Node* curr = *head;
        struct Node *prev = NULL, *next = NULL;

        while(curr)
        {
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }
        (*head) = prev;
    }
    
    struct Node* head = nullptr;
    struct Node* temp = head;
    
    //Function to add two numbers represented by linked list.
    struct Node* addTwoLists(struct Node* num1, struct Node* num2)
    {
        reverse(&num1);
        reverse(&num2);
        
        int carry = 0;
        
        while(num1 || num2 || carry) {
            int sum = 0;
            if(num1) {
                sum += num1->data;
                num1 = num1->next;
            }
            if(num2) {
                sum += num2->data;
                num2 = num2->next;
            }
            if(carry)   sum += carry;
            
            int val = sum % 10;
            carry = sum / 10;
            
            if(!head) {
                head = new Node(val);
                temp = head;
            } else {
                temp->next = new Node(val);
                temp = temp->next;
            }
        }
        
        reverse(&head);
        
        while(head && head->next && head->data == 0)
            head = head->next;
        
        return head;
    }
};


//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n, m;
        
        cin>>n;
        Node* num1 = buildList(n);
        
        cin>>m;
        Node* num2 = buildList(m);
        Solution ob;
        Node* res = ob.addTwoLists(num1,num2);
        printList(res);
    }
    return 0;
}

// } Driver Code Ends