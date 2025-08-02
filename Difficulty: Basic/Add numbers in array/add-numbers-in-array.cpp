//User function Template for C++

class Solution{
    public:
    long long get_Sum(int n,vector<int>&input)
    {
        long long ans=0;
        for (int num:input)
            ans+=num;
        return ans;
    }
};
