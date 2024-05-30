//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends


class Solution{
    public:
    string shortestPath (string S)
    {
        int n=0, s=0, e=0, w=0;
        for (int i=0;i<S.length();i++)
        {
            if (S[i]=='N')
            {
                if (s>0)
                    s--;
                else n++;
            }
            else if (S[i]=='S')
            {
                if (n>0)
                    n--;
                else s++;
            }
            else if (S[i]=='E')
            {
                if (w>0)
                    w--;
                else e++;
            }
            else
            {
                if (e>0)
                    e--;
                else w++;
            }
        }
        string ans="";
        while (e>0)
        {
            ans+='E';
            e--;
        }
        while (n>0)
        {
            ans+='N';
            n--;
        }
        while (s>0)
        {
            ans+='S';
            s--;
        }
        while (w>0)
        {
            ans+='W';
            w--;
        }
        return ans;
    }
};

//{ Driver Code Starts.
int main()
{
    int t; cin >> t;
    while (t--)
    {
        string s; cin >> s;
        Solution ob;
        cout << ob.shortestPath (s) << endl;
    }
}

// } Driver Code Ends
