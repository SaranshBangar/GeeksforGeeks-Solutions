/* Node is defined as
  class Node {
  public:
    int data;
    Node* next;

    Node(int x) {
        data = x;
        next = nullptr;
    }
};
*/
class Solution {
  public:
    Node* segregate(Node* head)
    {
        int zeroCount = 0;
        int oneCount = 0;
        int twoCount = 0;
        Node* temp = head;
        
        while(temp){
            if(temp -> data == 0){
                zeroCount++;
            }
            else if(temp -> data == 1){
                oneCount++;
            }
            else{
                twoCount++;
            }
            temp = temp -> next;
        }
        
        temp = head;
        for(int i = 0; i < zeroCount; i++){
            temp -> data = 0; 
            temp = temp -> next;
        }
        
        for(int i = 0; i < oneCount; i++){
            temp -> data = 1; 
            temp = temp -> next;
        }
        
        for(int i = 0; i < twoCount; i++){
            temp -> data = 2; 
            temp = temp -> next;
        }
        return head;
    }
};