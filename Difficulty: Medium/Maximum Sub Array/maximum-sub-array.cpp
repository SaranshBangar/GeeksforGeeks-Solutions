//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
// User function template for C++
class Solution {
  public:
    vector<int> findSubarray(int n, int a[])
    {
        vector<int>vec;
        int sum=0;
        for (int i=0;i<n;i++)
        {
            if (a[i]>=0)
            {
                vector<int>temp;
                int count=0;
                while (i<n && a[i]>=0)
                {
                    temp.push_back(a[i]);
                    count+=a[i];
                    i++;
                }
                if (count>sum)
                {
                    sum=count;
                    vec=temp;
                }
                else if (count==sum)
                {
                    if (temp.size()>vec.size())
                        vec=temp;
                }
            }
        }
        if (vec.empty())
        {
            vec.push_back(-1);
            return vec;
        }
        return vec;
    }
};

//{ Driver Code Starts.

void printAns(vector<int> &ans) {
    for (auto &x : ans) {
        cout << x << " ";
    }
    cout << "\n";
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        int a[n];
        for (i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        auto ans = ob.findSubarray(n, a);
        printAns(ans);
    }
    return 0;
}

// } Driver Code Ends