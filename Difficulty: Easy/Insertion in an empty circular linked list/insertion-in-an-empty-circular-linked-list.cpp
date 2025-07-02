// User function Template for C++
class Solution {
  public:

    Node* insertInEmptyList(Node* last, int data)
    {
        Node* newNode=new Node(data);
        newNode->next=newNode;
        return newNode;
    }
};
