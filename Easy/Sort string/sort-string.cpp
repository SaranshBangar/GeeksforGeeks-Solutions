//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{	public:
		string SortedString(string s)
		{
		    string vow="", con="";
            for (int i=0;i<s.length();i++)
            {
                if (s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u')
                    vow+=s[i];
                else con+=s[i];
            }
            sort(vow.begin(), vow.end());
            sort(con.begin(), con.end());
            string ans="";
            int i=0, j=0;
            if (s[0]=='a' || s[0]=='e' || s[0]=='i' || s[0]=='o' || s[0]=='u')
            {
                while (i<vow.length() && j<con.length())
                {
                    ans+=vow[i];
                    i++;
                    ans+=con[j];
                    j++;
                }
            }
            else
            {
                while (i<vow.length() && j<con.length())
                {
                    ans+=con[j];
                    j++;
                    ans+=vow[i];
                    i++;
                }
            }
            while (i<vow.length())
            {
                ans+=vow[i];
                i++;
            }
            while (j<con.length())
            {
                ans+=con[j];
                j++;
            }
            return ans;
		}

};


//{ Driver Code Starts.
int main(){
    int t;
    cin >> t;
    while(t--)
    {
	    string s;
	    cin >> s;
	    Solution ob;
	    string ans=ob.SortedString(s);
	    cout<<ans<<"\n";
    }
	return 0;
}
// } Driver Code Ends