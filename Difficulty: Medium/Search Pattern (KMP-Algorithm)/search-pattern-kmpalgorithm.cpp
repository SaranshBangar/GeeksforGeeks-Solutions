//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution
{
    public:
        vector<int>func(string s)
        {
            int n=(int)s.length();
            vector<int> pi(n);
            for (int i=1;i<n;i++)
            {
                int j=pi[i-1];
                while (j>0 && s[i]!=s[j])
                    j=pi[j-1];
                if (s[i]==s[j])
                    j++;
                pi[i]=j;
            }
            return pi;
        }
        vector <int> search(string pat, string txt)
        {
            string look=pat+'?'+txt;
            vector<int>kmp=func(look);
            vector<int>ans;
            int fr=2*pat.size();
            for(int i=fr;i<look.size();i++)
            {
                if(kmp[i]==pat.size())
                    ans.push_back(i-fr);
            }
            return ans;
        }
     
};


//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string S, pat;
        cin >> S >> pat;
        Solution ob;
        vector<int> res = ob.search(pat, S);
        if (res.size() == 0)
            cout << "[]" << endl;
        else {
            for (int i : res)
                cout << i << " ";
            cout << endl;
        }
    }
    return 0;
}

// } Driver Code Ends