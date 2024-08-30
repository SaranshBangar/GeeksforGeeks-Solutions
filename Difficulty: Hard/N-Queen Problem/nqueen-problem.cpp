//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution
{
    vector<vector<int>> ans;
    vector<int> p;
    vector<int> d1, d2, r;
    public:
    void helper(int c, int n)
    {
        if(c==n)
        {
            ans.push_back(p);
            return;
        }
        for(int i=0;i<n;i++)
        {
            if(!d1[c+i] && !d2[c-i+n-1] && !r[i])
            {
                d1[c+i]=1;
                d2[c-i+n-1]=1;
                r[i]=1;
                p.push_back(i+1);
                helper(c+1,n);
                p.pop_back();
                d1[c+i]=0;
                d2[c-i+n-1]=0;
                r[i]=0;
            }
        }
    }
    vector<vector<int>> nQueen(int n)
    {
        d1.assign(2*n-1,0);
        r.assign(n,0);
        d2.assign(2*n-1,0); 
        helper(0,n);
        return ans;
    }
};


//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        
        Solution ob;
        vector<vector<int>> ans = ob.nQueen(n);
        if(ans.size() == 0)
            cout<<-1<<"\n";
        else {
            for(int i = 0;i < ans.size();i++){
                cout<<"[";
                for(int u: ans[i])
                    cout<<u<<" ";
                cout<<"] ";
            }
            cout<<endl;
        }
    }
    return 0;
}
// } Driver Code Ends