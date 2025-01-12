//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
class Solution {
  public:
    int maxWater(vector<int> &arr)
    {
        int n=arr.size();
        long maxL=-1, maxR=-1, count=0;
        int arrL[n];
        int arrR[n];
        for (long i=0;i<n;i++)
        {
            if (maxL<arr[i])
                maxL=arr[i];
            arrL[i]=maxL;
        }
        for (long i=n-1;i>=0;i--)
        {
            if (maxR<arr[i])
                maxR=arr[i];
            arrR[i]=maxR;
        }
        for (int i=0;i<n;i++)
        {
            if (min(arrR[i], arrL[i])>arr[i])
                count+=min(arrR[i], arrL[i])-arr[i];
        }
        return count;
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

        // Read first array
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }

        Solution ob;
        int res = ob.maxWater(arr);

        cout << res << endl << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends