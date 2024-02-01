//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

class Solution
{
    public:
    bool checkPangram (string s)
    {
        vector<int> f(26, 0);
        for(auto i:s)
        {
            char cur=tolower(i);
            if ((cur>='a') && (cur<='z'))
                f[cur-'a']=1;
        }
            
        return accumulate(f.begin(), f.end(), 0)==26;
    }

};

//{ Driver Code Starts.

// Driver Program to test above functions
int main()
{
    int t;
    cin>>t;
    cin.ignore(INT_MAX, '\n');
    while(t--){
        string s;
        getline(cin, s);
        Solution obj;
        if (obj.checkPangram(s) == true)
            cout<<1<<endl;
        else
            cout<<0<<endl;
    }
    return(0);
}

// } Driver Code Ends