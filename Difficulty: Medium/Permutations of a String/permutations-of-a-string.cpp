//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    void generate(int l,int n,string &s,unordered_set<string> &st)
    {
        if(l==n)
        {
            st.insert(s);
            return;
            
        }
        for(int i=l;i<=n;i++)
        {
            swap(s[l],s[i]);
            generate(l+1,n,s,st);
            swap(s[l],s[i]);
            
        }
        return;
        
    }
  
    vector<string> findPermutation(string &s)
    {
        vector<string> ans;
        unordered_set<string> st;
        generate(0,s.size()-1,s,st);
        for(auto ele : st)
            ans.push_back(ele);
        return ans;
    }
};


//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string S;
        cin >> S;
        Solution ob;
        vector<string> ans = ob.findPermutation(S);
        sort(ans.begin(), ans.end());
        for (auto i : ans) {
            cout << i << " ";
        }
        cout << "\n";

        cout << "~"
             << "\n";
    }
    return 0;
}

// } Driver Code Ends