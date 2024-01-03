//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h> 
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution
{
  public:
    string lookandsay(int n)
    {
        if (n == 1)
            return "1";
        string prev=lookandsay(n-1);
        string result="";
        int count=1;
        for (int i=1;i<prev.length();i++)
        {
            if (prev[i]==prev[i-1])
                count++;
            else
            {
                result+=to_string(count)+prev[i-1];
                count=1;
            }
        }
        result+=to_string(count)+prev.back();
        return result;
    }   
};


//{ Driver Code Starts.
int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        Solution obj;
        cout<<obj.lookandsay(n)<<endl;
    }
    return 0;
}
// } Driver Code Ends