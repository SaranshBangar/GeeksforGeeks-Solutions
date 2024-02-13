//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends


class Solution
{
  public:
    string arrangeString(string str, int x, int y)
    {
        int one=0, zero=0;
        string ans;
        for (int i=0;i<str.length();i++)
        {
            if (str[i]=='0')
                zero++;
            else one++;
        }
        while (zero && one)
        {
            for (int i=0;i<x;i++)
            {
                ans+=to_string(0);
                zero--;
                if (zero<=0)
                    break;
            }
            for (int i=0;i<y;i++)
            {
                ans+=to_string(1);
                one--;
                if (one<=0)
                    break;
            }
        }
        while (zero)
        {
            ans+=to_string(0);
            zero--;
        }
        while (one)
        {
            ans+=to_string(1);
            one--;
        }
        return ans;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin >> t;
    while(t--){
        int x, y;
        cin >> x >> y;
        string s;
        cin >> s;
        Solution ob;
        cout <<ob.arrangeString(s, x, y) << endl;
    }
return 0;
}


// } Driver Code Ends