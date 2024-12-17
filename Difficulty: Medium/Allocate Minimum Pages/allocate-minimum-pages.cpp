//{ Driver Code Starts
// Initial function template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    bool func(vector<int> &arr, int k, int lt) 
    {
        int cnt=1, sum=0;
        for(int i=0;i<arr.size();i++)
        {
            if(sum+arr[i]>lt)
            {
                cnt++;
                sum=arr[i];
            }
            else sum+=arr[i];
        }
        return (cnt<=k);
    }
    int findPages(vector<int> &arr, int k)
    {
        if(k>arr.size())
            return -1;
        int mn=*max_element(arr.begin(), arr.end());
        int mx=accumulate(arr.begin(), arr.end(), 0);
        int left=mn, right=mx;
        while(left<right)
        {
            int mid=left+(right-left)/2;
            if(func(arr, k, mid))
                right=mid;
            else left=mid+1;
        }
        
        return left;
    }
};

//{ Driver Code Starts.

int main() {
    int test_case;
    cin >> test_case;
    cin.ignore();
    while (test_case--) {

        int d;
        vector<int> arr, brr, crr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        getline(cin, input);
        ss.clear();
        ss.str(input);
        while (ss >> number) {
            crr.push_back(number);
        }
        d = crr[0];
        int n = arr.size();
        Solution ob;
        int ans = ob.findPages(arr, d);
        cout << ans << endl;

        cout << "~"
             << "\n";
    }
    return 0;
}
// } Driver Code Ends