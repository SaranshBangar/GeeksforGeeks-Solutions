//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends


class Solution
{
  public:
    string arrangeString(string str)
    {
        int num=0;
        string ans="";
        for (int i=0;i<str.length();i++)
        {
            if (str[i]>='A' && str[i]<='Z')
                ans+=str[i];
            else num+=(str[i]-'0');
        }
        sort(ans.begin(), ans.end());
        if (num!=0)
            ans+=to_string(num);
        return ans;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        Solution ob;
        cout <<ob.arrangeString(s) << endl;
    }
return 0;
}


// } Driver Code Ends