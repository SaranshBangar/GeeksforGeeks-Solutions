//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
#define MAX 1000

// } Driver Code Ends
class Solution
{
    public:
    /*You are required to complete this method*/
    int findK(int a[MAX][MAX],int R,int C,int k)
    {
 		vector<int>ans;
        if (R==1)
        {
            for (int i=0;i<C;i++)
                ans.push_back(a[0][i]);
            return ans[k-1];
        }
        if (C==1)
        {
            for (int i=0;i<R;i++)
                ans.push_back(a[i][0]);
            return ans[k-1];
        }
        int top=0, bottom=R-1, left=0, right=C-1;
        while (top<=bottom && left<=right)
        {
            for (int i=left;i<=right;i++)
                ans.push_back(a[top][i]);
            top++;
            for (int i=top;i<=bottom;i++)
                ans.push_back(a[i][right]);
            right--;
            if (top<=bottom)
            {
                for (int i=right;i>=left;i--)
                    ans.push_back(a[bottom][i]);
                bottom--;
                for (int i=bottom;i>=top;i--)
                    ans.push_back(a[i][left]);
                left++;
            }
        }
        return ans[k-1];
    }
};


//{ Driver Code Starts.
int main()
{
    int T;
    cin>>T;
  
    while(T--)
    {
        int n,m;
        int k=0;
        //cin>>k;
        cin>>n>>m>>k;
        int a[MAX][MAX];
        
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                cin>>a[i][j];
            }
        }
        Solution ob;
        cout<<ob.findK(a,n,m,k)<<endl;
       
    }
}
// } Driver Code Ends
