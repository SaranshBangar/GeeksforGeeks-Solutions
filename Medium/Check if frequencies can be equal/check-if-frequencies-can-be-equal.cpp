//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

class Solution{
public:	
	bool sameFreq(string s)
	{
	     unordered_map<char,int> mm;
	    for(auto x:s)mm[x]++;
	    int mn=INT_MAX,mx=INT_MIN,mxCount=0,mnCount=0;
	    for(auto x:mm){
	        mn=min(mn,x.second);
	        mx=max(mx,x.second);
	    }
	    for(auto x:mm){
	        if(x.second==mx)mxCount++;
	        else if(x.second==mn)mnCount++;
	    }
	    if(mn==mx or (mn==mx-1 and mxCount==1))return true;
	    if(mnCount==1 and mn==1 and mxCount+mnCount==mm.size())return true;
	    return false;
	}
};


//{ Driver Code Starts.
int main(){
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        Solution ob;
        cout<<ob.sameFreq(s)<<endl;
    }
}



// } Driver Code Ends