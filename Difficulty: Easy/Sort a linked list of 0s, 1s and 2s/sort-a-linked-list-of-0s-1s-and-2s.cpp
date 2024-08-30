//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

/* Link list Node */
struct Node {
    int data;
    struct Node* next;

    Node(int x) {
        data = x;
        next = nullptr;
    }
};

void printList(Node* node) {
    while (node != NULL) {
        cout << node->data << " ";
        node = node->next;
    }
    cout << "\n";
}

void freeList(struct Node* head) {
    struct Node* temp;
    while (head != NULL) {
        temp = head;
        head = head->next;
        delete temp;
    }
}


// } Driver Code Ends
/*

  Node is defined as
  struct Node {
    int data;
    struct Node *next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

*/
class Solution {
  public:
    // Function to sort a linked list of 0s, 1s and 2s.
    Node* segregate(Node* head) {

        // Add code here
        int zeroCount = 0;
        int oneCount = 0;
        int twoCount = 0;
        Node* temp = head;
        
        while(temp){
            if(temp -> data == 0){
                zeroCount++;
            }
            else if(temp -> data == 1){
                oneCount++;
            }
            else{
                twoCount++;
            }
            temp = temp -> next;
        }
        
        temp = head;
        for(int i = 0; i < zeroCount; i++){
            temp -> data = 0; 
            temp = temp -> next;
        }
        
        for(int i = 0; i < oneCount; i++){
            temp -> data = 1; 
            temp = temp -> next;
        }
        
        for(int i = 0; i < twoCount; i++){
            temp -> data = 2; 
            temp = temp -> next;
        }
        return head;
        
    }
};


//{ Driver Code Starts.

// Driver program to test above functions
int main() {
    int t, k;
    cin >> t;
    cin.ignore(); // Ignore the newline character after t

    while (t--) {
        string input;
        getline(cin, input); // Read the entire line for the array elements

        stringstream ss(input);
        Node *head = nullptr, *tail = nullptr;
        int x;

        if (ss >> x) {
            head = new Node(x);
            tail = head;

            while (ss >> x) {
                tail->next = new Node(x);
                tail = tail->next;
            }

            // Link the last node to the head if k is 1 to make it circular
            if (k == 1) {
                tail->next = head;
            }
        }

        Solution ob;
        Node* newHead = ob.segregate(head);
        printList(newHead);
    }

    return 0;
}
// } Driver Code Ends