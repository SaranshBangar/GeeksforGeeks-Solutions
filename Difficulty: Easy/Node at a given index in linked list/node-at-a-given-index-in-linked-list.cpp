//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    struct Node *next;

    Node(int x) {
        data = x;
        next = NULL;
    }
};

void printList(Node *node) {
    while (node != NULL) {
        cout << node->data << " ";
        node = node->next;
    }
    cout << "\n";
}


// } Driver Code Ends
/* Print he nth node in the linked list Node is defined as
/* Link list node
struct node
{
    int data;
    struct node* next;

    node(int x){
        data = x;
        next = NULL;
    }
};
*/

// Should return data of node at given index. The function may
//  assume that there are at least index+1 nodes in linked list

class Solution {
  public:
    int GetNth(Node *head, int index)
    {
        for (int i=1;i<index;i++)
        {
            if (head->next)
                head=head->next;
            else return -1;
        }
        return (head->data);
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
        int k;
        cin >> k;
        cin.ignore();
        struct Node *head = new Node(arr[0]);
        struct Node *tail = head;
        for (int i = 1; i < arr.size(); ++i) {
            tail->next = new Node(arr[i]);
            tail = tail->next;
        }
        Solution ob;
        int res = ob.GetNth(head, k);
        cout << res << endl;
        cout << "~" << endl;
    }
    return 0;
}
// } Driver Code Ends