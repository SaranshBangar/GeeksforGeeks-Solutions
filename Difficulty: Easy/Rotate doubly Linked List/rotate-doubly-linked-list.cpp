/*
class Node
{
public:
    int data;
    Node *prev;
    Node *next;

    Node(int x)
    {
        data = x;
        prev = nullptr;
        next = nullptr;
    }
};
*/

class Solution {
  public:
    void func(vector<int>& vec, int p)
    {
        reverse(vec.begin(), vec.begin()+p);
        reverse(vec.begin()+p, vec.end());
        reverse(vec.begin(), vec.end());
    }
    Node *rotateDLL(Node *head, int p)
    {
        vector<int>vec;
        Node* temp=head;
        while (temp)
        {
            vec.push_back(temp->data);
            temp=temp->next;
        }
        temp=head;
        func(vec, p%vec.size());
        for (int i=0;i<vec.size();i++)
        {
            temp->data=vec[i];
            temp=temp->next;
        }
        return head;
    }
};