//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

// User function Template for C++

class Solution {
  public:
    int setBitCount(int n)
    {
        int len=(int)(log2(n));
        string str=bitset<64>(n).to_string().substr(64 - len - 1);
        int ans=0;
        for (int i=0;i<str.length();i++)
            if (str[i]=='1')
                ans++;
        return ans;
    }
};


//{ Driver Code Starts.

int main()
{
    int t; cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        
        Solution ob;
        
        cout <<ob.setBitCount(n) << endl;
    
cout << "~" << "\n";
}
}



// } Driver Code Ends