//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
//User function Template for C++

class Solution{   
public:
    int findDepth(int house)
    {
        int depth=0;
        while (house>0)
        {
            house/=2;
            depth++;
        }
        return depth;
    }
    
    int findCommonAncestor(int x, int y)
    {
        int depthX=findDepth(x);
        int depthY=findDepth(y);
        while (depthX>depthY)
        {
            x/=2;
            depthX--;
        }
        while (depthY>depthX)
        {
            y/=2;
            depthY--;
        }
        while (x!=y)
        {
            x/=2;
            y/=2;
        }
        return x;
    }
    
    int shortestPath(int x, int y)
    {
        int commonAncestor=findCommonAncestor(x, y);
        int depthX=findDepth(x);
        int depthY=findDepth(y);
        int depthCommon=findDepth(commonAncestor);
        return ((depthX+depthY)-(2*depthCommon));
    }
};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int x,y;
        cin>>x>>y;
        Solution ob;
        cout<< ob.shortestPath(x,y) << endl;
    }
    return 0; 
} 
// } Driver Code Ends