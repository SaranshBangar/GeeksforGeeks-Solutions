// User function Template for C++
int distinct(vector<int>& arr)
{
    sort(arr.begin(), arr.end());
    arr.erase(unique(arr.begin(), arr.end()), arr.end());
    return arr.size();
}