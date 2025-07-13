// User function Template for C++

class Solution {
  public:
    // Function to swap A and B
    // using pointers
    void swap(int *A, int *B)
    {
        int temp=*A;
        *A=*B;
        *B=temp;
    }
};
