//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    bool func (vector<int>temp)
    {
        if (temp[1]-temp[0]>0)
        {
            for (int i=0;i<temp.size()-1;i++)
            {
                if (temp[i]>=temp[i+1])
                    return false;
            }
        }
        else
        {
            for (int i=0;i<temp.size()-1;i++)
            {
                if (temp[i]<=temp[i+1])
                    return false;
            }
        }
        return true;
    }
    int sortedCount(int N, int M, vector<vector<int>> Mat)
    {
        int count=0;
        for (int i=0;i<Mat.size();i++)
        {
            if (func(Mat[i]))
                count++;
        }
        return count;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N, M;
        cin >> N >> M;
        vector<vector<int>> Mat(N, vector<int>(M));
        for (int i = 0; i < N; i++)
            for (int j = 0; j < M; j++) cin >> Mat[i][j];
        Solution ob;
        cout << ob.sortedCount(N, M, Mat) << "\n";
    }
}
// } Driver Code Ends