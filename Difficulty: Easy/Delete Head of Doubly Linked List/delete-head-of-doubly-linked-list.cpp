// User function Template for C++

/*
struct Node
{
    int data;
    Node * next;
    Node * prev;
    Node (int x)
    {
        data=x;
        next=NULL;
        prev=NULL;
    }

};
*/
Node *deleteHead(Node *head)
{
    if (!head || !head->next)
        return nullptr;
    Node *newHead=head->next;
    newHead->prev=nullptr;
    delete(head);
    return newHead;
}
