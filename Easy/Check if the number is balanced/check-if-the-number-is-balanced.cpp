//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++
class Solution{
public:	
    int func(string str)
    {
        int ret=0;
        for (int i=0;i<str.length();i++)
            ret+=(str[i]-'0');
        return ret;
    }
	bool balancedNumber(string N)
	{
	    int len=N.length();
	    string one=N.substr(0, len/2);
        string two=N.substr((len/2)+1, len/2);
        int size1=func(one);
        int size2=func(two);
        return size1==size2;
	}
};

//{ Driver Code Starts.
int main(){
    int t;
    cin>>t;
    while(t--)
    {
        string N;
        cin>>N;
        Solution ob;
        cout<<ob.balancedNumber(N)<<endl;
    }
    return 0;
}

// } Driver Code Ends