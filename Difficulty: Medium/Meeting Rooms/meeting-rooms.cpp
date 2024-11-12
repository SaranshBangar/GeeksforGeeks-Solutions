//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    bool canAttend(vector<vector<int>> &arr)
    {
        sort(arr.begin(),arr.end());
        int m=arr.size();
        int n=arr[0].size();
        int startm=arr[0][0];
        int endm=arr[0][1];
        int flag=true;
        for(int i=1;i<m;i++)
        {
            if(endm<=arr[i][0])
            {
                startm=arr[i][0];
                endm=arr[i][1];
            }
            else
            {
                flag=false;
                break;
            }
        }
        return flag;
    }
};

//{ Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int n;
        cin >> n;
        vector<vector<int>> arr(n);
        for (int i = 0; i < n; i++) {
            int x, y;
            cin >> x >> y;
            arr[i].push_back(x);
            arr[i].push_back(y);
        }
        cin.ignore();
        Solution obj;
        bool ans = obj.canAttend(arr);
        if (ans)
            cout << "true" << endl;
        else
            cout << "false" << endl;
    }
    return 0;
}
// } Driver Code Ends