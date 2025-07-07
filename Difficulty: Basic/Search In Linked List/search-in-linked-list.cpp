// User function Template for C++

/*
struct Node
{
    int data;
    Node * next;
    Node (int x)
    {
        data=x;
        next=NULL;
    }

};
*/
class Solution {
  public:
    bool searchLinkedList(Node *head, int x)
    {
        while (head)
        {
            if (head->data==x)
                return true;
            head=head->next;
        }
        return false;
    }
};