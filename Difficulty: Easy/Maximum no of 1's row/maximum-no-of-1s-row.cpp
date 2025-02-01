//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
        int maxOnes (vector <vector <int>> &Mat, int N, int M)
        {
            int ans=0, count=INT_MIN;
            for (int i=0;i<N;i++)
            {
                int one=0;
                for (int j=0;j<M;j++)
                {
                    if (Mat[i][j]==1)
                        one++;
                }
                if (count<one)
                {
                    count=one;
                    ans=i;
                }
            }
            return ans;
        }
};

//{ Driver Code Starts.

int main(){
    int t; cin >> t;
    while (t--){
        int n, m; cin >> n >> m;
        vector <vector <int>> arr (n, vector <int> (m));
        for (int i = 0; i < n; i++)
            for (int j = 0; j < m; j++)
                cin >> arr[i][j];
        Solution ob;        
        cout << ob.maxOnes(arr, n, m) << endl;
    
cout << "~" << "\n";
}
}
// } Driver Code Ends