//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends

#define PRIME 101

class Solution
{
    public:
        vector <int> search(string pattern, string text)
        {
            vector<int> ans;
            int h=pattern.length();
            int n=text.length();
            int p=1;
            for (int i=0;i<h-1;i++)
            {
                p=(p*26)%PRIME;
            }
            int phash=0;
            int thash=0;
            for (int i=0;i<h;i++)
            {
                phash=((phash*26)+pattern[i])%PRIME;
                thash=((thash*26)+text[i]) % PRIME;
            }
            for (int i=0;i<=n-h;i++)
            {
                if (phash==thash)
                {
                    bool match=true;
                    for (int j=0;j<h;j++)
                    {
                        if (pattern[j]!=text[i+j])
                        {
                            match=false;
                            break;
                        }
                    }
                    if (match)
                        ans.push_back(i+1);
                }
                if (i<n-h)
                {
                    thash=(26*(thash-text[i]*p)+text[i+h])%PRIME;
                    if (thash<0)
                        thash+=PRIME;
                }
            }
            return ans;
        }
     
};


//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string S, pat;
        cin >> S >> pat;
        Solution ob;
        vector <int> res = ob.search(pat, S);
        for (int i : res) cout << i << " ";
        cout << endl;
    }
    return 0;
}

// Contributed By: Pranay Bansal

// } Driver Code Ends