/*
class Node {
  public:
    int data;
    Node *next;
    Node *prev;
    Node(int val) {
        data = val;
        next = NULL;
        prev = NULL;
    }
};

*/
class Solution {
  public:
    Node *reverse(Node *head)
    {
        Node* temp = nullptr;
        Node* current = head;
        while (current != nullptr)
        {
            temp=current;
            current=current->next;
        }
        head = temp;
        while (temp!=nullptr)
        {
            swap(temp->next, temp->prev);
            temp=temp->next;
        }
        return head;
    }
};