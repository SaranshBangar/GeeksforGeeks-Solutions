/*
class Node {
  public:
    int data;
    Node* next;

    Node(int x){
        data = x;
        next = NULL;
    }
};
*/

class Solution {
  public:
    Node* mergeKLists(vector<Node*>& arr)
    {
        vector<int> values;
        for (Node* head : arr)
        {
            Node* current=head;
            while (current!=NULL)
            {
                values.push_back(current->data);
                current=current->next;
            }
        }
        sort(values.begin(), values.end());
        if (values.empty())
            return NULL;
        Node* head=new Node(values[0]);
        Node* current=head;
        for (size_t i=1;i<values.size();++i)
        {
            current->next=new Node(values[i]);
            current=current->next;
        }
        return head;
    }
};