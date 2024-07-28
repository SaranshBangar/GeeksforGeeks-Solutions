//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends

class Solution{   
public:
    string compareNum(int A,int B)
    {
        if (A>B)
            return (to_string(A)+" is greater than "+to_string(B));
        else if (A<B)
            return (to_string(A)+" is less than "+to_string(B));
        else return (to_string(A)+" is equals to "+to_string(B));
    }
};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int A,B;
        cin >> A>>B;
        Solution ob;
        cout << ob.compareNum(A,B) << endl;
    }
    return 0; 
} 

// } Driver Code Ends