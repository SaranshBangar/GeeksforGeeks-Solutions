//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
//User function Template for C++

#include <cmath>
#include <bitset>
#include <algorithm>
#include <string>

class Solution
{
    public:
    unsigned int reverseBits(unsigned int n)
    {
        string b;
        while (n>0)
        {
            b += (n&1)?'1':'0';
            n>>=1;
        }
        unsigned int i=stoi(b, nullptr, 2);
        return i;
    }
};


//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N;
        cin >> N;
        
        Solution ob;
        cout<< ob.reverseBits(N) <<"\n";
        
    }
    return 0;
}

// } Driver Code Ends