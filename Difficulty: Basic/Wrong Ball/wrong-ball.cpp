//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
int countWrongPlacedBalls(string s);
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string a;
        cin>>a;
        cout<<countWrongPlacedBalls(a)<<endl;
        
    }
}

// } Driver Code Ends


int countWrongPlacedBalls(string s)
{
    int count=0;
    for (int i=1;i<=s.length();i++)
    {
        if ((i%2==0 && s[i-1]=='R') || (i%2==1 && s[i-1]=='B'))
            count++;
    }
    return count;
}
