// User function Template for C++

// You need to complete this function.
// Function to check if there is a pair with the given sum in the array.
int sumExists(vector<int>& arr, int sum)
{
    sort(arr.begin(), arr.end());
    int low=0, high=arr.size()-1;
    while (low<high)
    {
        if (arr[low]+arr[high]==sum)
            return 1;
        else if (arr[low]+arr[high]>sum)
            high--;
        else low++;
    }
    return 0;
}