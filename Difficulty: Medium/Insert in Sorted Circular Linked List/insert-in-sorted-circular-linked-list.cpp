/* structure for a node
class Node {
 public:
  int data;
  Node *next;

  Node(int x){
      data = x;
      next = NULL;
  }
}; */

class Solution {
  public:
    Node* sortedInsert(Node* head, int data)
    {
        Node* newNode=new Node(data);
        if (!head)
        {
            newNode->next=newNode;
            return newNode;
        }
        Node* curr=head;
        Node* next=curr->next;
        if (data<=curr->data)
        {
            newNode->next=head;
            while (curr->next!=head)
                curr=curr->next;
            curr->next=newNode;
            return newNode;
        }
        while (next!=head && data>next->data)
        {
            curr=next;
            next=next->next;
        }
        curr->next=newNode;
        newNode->next=next;
        return head;
    }
};