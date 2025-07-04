class Solution {
  public:
    // Function to search x in arr
    // arr: input array
    // X: element to be searched for
    int search(int arr[], int n, int x)
    {
        for (int i=0;i<n;i++)
            if (arr[i]==x)
                return i;
        return -1;
    }
};