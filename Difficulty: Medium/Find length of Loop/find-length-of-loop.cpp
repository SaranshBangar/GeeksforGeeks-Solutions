/*
class Node {
 public:
    int data;
    Node *next;

    Node(int x) {
        data = x;
        next = NULL;
    }
};
*/

class Solution {
  public:
    int lengthOfLoop(Node *head)
    {
        Node *p=head;
        int i=-1;
        while(p!=NULL && p->data>=0)
        {
            p->data=i;
            i--;
            p=p->next;
        }
        if(p!=NULL)
            return p->data-i;
        return 0;
    }
};