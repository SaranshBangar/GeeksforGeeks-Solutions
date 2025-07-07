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

vector<int> displayList(Node *head)
{
    vector<int>vec;
    while (head)
    {
        vec.push_back(head->data);
        head=head->next;
    }
    return vec;
}
