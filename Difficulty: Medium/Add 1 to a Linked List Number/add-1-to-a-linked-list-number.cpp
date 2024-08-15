//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    struct Node* next;

    Node(int x) {
        data = x;
        next = NULL;
    }
};

void printList(Node* node) {
    while (node != NULL) {
        cout << node->data % 10;
        node = node->next;
    }
    cout << "\n";
}


// } Driver Code Ends
// User function template for C++

/*

struct Node
{
    int data;
    struct Node* next;

    Node(int x){
        data = x;
        next = NULL;
    }
};

*/

class Solution {
  public:
    Node* addOne(Node* head)
    {
        // Your Code here
        // return head of list after adding one
        Node *l=NULL, *r=head;
        while(r && r->data==9)
            r=r->next;
        if(!r)
        {
            Node* h=new Node(1);
            h->next=head;
            l=head;
            while(l)
            {
                l->data=0;
                l=l->next;
            }
            return h;
        }
        l=r;
        while(l && r)
        {
            while(l->next && l->next->data!=9)
                l=l->next;
            r=l->next;
            while(r && r->data==9)
                r=r->next;
            if(!r)
            {
                l->data=l->data+1;
                l=l->next;
                while(l)
                {
                    l->data=0;
                    l=l->next;
                }
                break;
            }
            l=r;
        }
        return head;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }

        if (arr.empty()) {
            cout << -1 << endl;
            continue;
        }

        int data = arr[0];
        struct Node* head = new Node(data);
        struct Node* tail = head;
        for (int i = 1; i < arr.size(); ++i) {
            data = arr[i];
            tail->next = new Node(data);
            tail = tail->next;
        }
        Solution ob;
        head = ob.addOne(head);
        printList(head);
    }
    return 0;
}

// } Driver Code Ends