// User function Template for C++

// Complete this function
int vMax(vector<int>& arr)
{
    auto it=max_element(arr.begin(), arr.end());
    return *it;
}