// User function Template for C++
class Solution {
  public:
    int findSize(Node *head)
    {
        int cnt=0;
        while (head)
        {
            head=head->next;
            cnt++;
        }
        return cnt;
    }
};