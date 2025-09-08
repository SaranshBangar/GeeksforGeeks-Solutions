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
    Node* mergeSort(Node* head)
    {
        vector<int>vec;
        Node* temp=head;
        while (temp)
        {
            vec.push_back(temp->data);
            temp=temp->next;
        }
        temp=head;
        sort(vec.begin(), vec.end());
        for (int i=0;i<vec.size();i++)
        {
            temp->data=vec[i];
            temp=temp->next;
        }
        return head;
    }
};