//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

class Solution {
  public:
    vector<int> productExceptSelf(vector<int>& arr) 
    {
        int product=1, count=0, zeroIndex=-1;
        for (int i=0;i<arr.size();i++)
        {
            if (arr[i]!=0)
                product*=arr[i];
            else
            {
                count++;
                if (count==1)
                    zeroIndex=i;
            }
        }
        vector<int>ans(arr.size(), 0);
        if (count>1)
            return ans;
        if (count==1)
            ans[zeroIndex]=product;
        else for (int i=0;i<arr.size();i++)
            ans[i] =product/arr[i];
        return ans;
    }
};


//{ Driver Code Starts.

int main() {

    int t;
    cin >> t;
    cin.ignore();

    while (t--) {
        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;

        while (ss >> number) {
            arr.push_back(number);
        }

        Solution obj;
        vector<int> res = obj.productExceptSelf(arr);

        for (int i = 0; i < res.size(); i++) {
            cout << res[i] << " ";
        }
        cout << endl;
        cout << "~\n";
    }

    return 0;
}

// } Driver Code Ends