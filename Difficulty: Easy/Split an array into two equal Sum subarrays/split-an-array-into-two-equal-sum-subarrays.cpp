//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    bool canSplit(vector<int>& arr)
    {
        int n=arr.size();
        int i=0;
        int j=n-1;
        int leftsum=arr[0];
        int rightsum=arr[n-1];
        while(i<j)
        {
            if(leftsum==rightsum && i+1==j)
                return true;
            else if(leftsum>rightsum)
            {
                j--;
                rightsum+=arr[j];
            }
            else
            {
                i++;
                leftsum+=arr[i];
            }
        }
        return false;
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t-- > 0) {
        string s;
        getline(cin, s);
        stringstream ss(s);
        vector<int> arr;
        string temp;
        while (ss >> temp) {
            arr.push_back(stoi(temp));
        }

        Solution obj;
        bool res = obj.canSplit(arr);
        cout << (res ? "true" : "false") << endl;
    }
    return 0;
}
// } Driver Code Ends