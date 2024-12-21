//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std;

// } Driver Code Ends
class Solution{
public:
    int isHappy(int N)
    {
        while (N>9)
        {
            int cnt=0;
            while (N)
            {
                int d=N%10;
                cnt+=(d*d);
                N/=10;
            }
            N=cnt;
        }
        return (N==1||N==7)?1:0;
    }
};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N;
        cin>>N;
        Solution ob;
        cout << ob.isHappy(N) << endl;
    
cout << "~" << "\n";
}
    return 0; 
}
// } Driver Code Ends