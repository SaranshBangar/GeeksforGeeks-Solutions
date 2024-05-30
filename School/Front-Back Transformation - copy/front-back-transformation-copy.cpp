//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
string convert(string a);
int main()
{
    int t;
    cin>>t;
    while(t--)
        {
            string s;
            cin>>s;
            string ans=convert(s);
            cout<<ans<<endl;
            
        }
}

// } Driver Code Ends


string convert(string s)
{
    for (int i=0;i<s.length();i++)
    {
        if (s[i]>='a' && s[i]<='z')
            s[i]='z'+'a'-s[i];
        else s[i]='Z'+'A'-s[i];
    }
    return s;
}
