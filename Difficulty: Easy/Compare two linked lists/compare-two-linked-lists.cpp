//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// Linked list Node structure
struct Node {
    char data;
    struct Node *next;

    Node(char x) {
        data = x;
        next = NULL;
    }
};


// } Driver Code Ends
/* Linked list Node structure
struct Node {
    char data;
    struct Node *next;

    Node(char x) {
        data = x;
        next = NULL;
    }
};
*/

// Compare two strings represented as linked lists
class Solution {
  public:
    int compare(Node *head1, Node *head2)
    {
        while (head1 && head2)
        {
            if (head1->data>head2->data)
                return 1;
            else if (head2->data>head1->data)
                return -1;
            head1=head1->next;
            head2=head2->next;
        }
        if (head1)
            return 1;
        else if (head2)
            return -1;
        return 0;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore(); // Ignore newline character after reading integer

    while (t--) {
        Node *list1 = NULL, *list2 = NULL;
        string line;

        // Read first list
        getline(cin, line);
        istringstream iss1(line);
        char x;
        iss1 >> x;
        Node *temp1 = new Node(x);
        list1 = temp1;
        Node *current1 = temp1;

        while (iss1 >> x) {
            Node *newNode = new Node(x);
            current1->next = newNode;
            current1 = newNode;
        }

        // Read second list
        getline(cin, line);
        istringstream iss2(line);
        iss2 >> x;
        Node *temp2 = new Node(x);
        list2 = temp2;
        Node *current2 = temp2;

        while (iss2 >> x) {
            Node *newNode = new Node(x);
            current2->next = newNode;
            current2 = newNode;
        }

        // Compare lists
        Solution obj;
        cout << obj.compare(list1, list2) << endl;
        cout << "~" << endl;

        // Clean up memory
        Node *tmp;
        while (list1 != NULL) {
            tmp = list1;
            list1 = list1->next;
            delete tmp;
        }
        while (list2 != NULL) {
            tmp = list2;
            list2 = list2->next;
            delete tmp;
        }
    }

    return 0;
}

// } Driver Code Ends