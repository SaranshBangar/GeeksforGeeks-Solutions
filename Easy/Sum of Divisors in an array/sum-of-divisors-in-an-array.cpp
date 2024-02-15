//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    int func(int num)
    {
        if (num==1)
            return 0;
        int sum=1;
        for (int i=2;i<num;i++)
        {
            if (num%i==0)
                sum+=i;
        }
        return sum;
    }
    vector<int> sumOfProperDivisors(int arr[], int N)
    {
        vector<int>vec;
        for (int i=0;i<N;i++)
            vec.push_back(func(arr[i]));
        return vec;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        int arr[N];
        for (int i = 0; i < N; i++) cin >> arr[i];
        Solution ob;
        vector<int> ans = ob.sumOfProperDivisors(arr, N);
        for (int i = 0; i < ans.size(); i++) cout << ans[i] << " ";
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends