//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution {
  public:
    vector<string> findTheans(int N)
    {
        char c='A';
        vector<string>ans;
        for (int i=1;i<=N;i++)
        {
            string row="";
            if (i==1 || i==N)
            {
                for (int j=1;j<=N;j++)
                {
                    row+=c;
                    c++;
                }
            }
            else
            {
                for (int j=1;j<=N;j++)
                {
                    if (j==1 || j==N)
                    {
                        row+=c;
                        c++;
                    }
                    else
                    {
                        row+="$";
                    }
                }
            }
            ans.push_back(row);
        }
        return ans;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        
        cin>>N;

        Solution ob;
        vector<string> v=ob.findTheans(N);
        
        for(int i=0; i<v.size(); i++)
            cout<<v[i]<<endl;
    }
    return 0;
}
// } Driver Code Ends
