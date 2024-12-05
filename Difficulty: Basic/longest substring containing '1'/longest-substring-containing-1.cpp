//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
int maxlength(string s);
int main()
{
int t;
cin>>t;
while(t--)
{
string s;
cin>>s;
cout<<maxlength(s)<<endl;

cout << "~" << "\n";
}
return 0;
}

// } Driver Code Ends


int maxlength( string s)
{
    int ans=0;
    for (int i=0;i<s.length();i++)
    {
        if (s[i]=='1')
        {
            int len=0;
            while (s[i]=='1')
            {
                len++;
                i++;
            }
            ans=max(len, ans);
        }
    }
    return ans;
}