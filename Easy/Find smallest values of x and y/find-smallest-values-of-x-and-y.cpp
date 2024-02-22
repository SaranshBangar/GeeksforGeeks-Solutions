//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
#include <iostream>
#include <numeric>

class Solution
{
public:
    int gcd(int a, int b)
    {
        while (b!=0)
        {
            int temp=b;
            b=a%b;
            a=temp;
        }
        return a;
    }
    
    int lcm(int a, int b)
    {
        return (a*b)/gcd(a, b);
    }
    
    vector<int> findXY(int a, int b)
    {
        vector<int>ans;
        int com=lcm(a,b);
        ans.push_back(com/a);
        ans.push_back(com/b);
        return ans;
    }
};


//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int a, b;
        cin>>a>>b;
        
        Solution ob;
        vector<int> v = ob.findXY(a, b);
        cout<<v[0]<<" "<<v[1]<<"\n";
    }
    return 0;
}
// } Driver Code Ends