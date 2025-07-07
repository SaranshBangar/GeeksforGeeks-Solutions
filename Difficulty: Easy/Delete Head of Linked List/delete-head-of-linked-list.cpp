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
// Complete this function
Node *deleteHead(Node *head)
{
    Node* temp=head->next;
    head->next=nullptr;
    return temp;
}
