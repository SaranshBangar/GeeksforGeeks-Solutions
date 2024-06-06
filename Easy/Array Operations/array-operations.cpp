//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    int arrayOperations(int n, vector<int> &arr)
    {
        int count=0, k=0;
        while (arr[k]==0 && k<arr.size())
            k++;
        if (k==arr.size())
            return 0;
        for (int i=k;i<arr.size();i++)
        {
            if (arr[i]==0)
            {
                count++;
                while (arr[i++]==0)
                {
                    if (i==arr.size())
                        return count;
                }
            }
        }
        if (count==0)
            return -1;
        else return count+1;
    }
};


//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        
        int n;
        cin>>n;
        
        
        vector<int> arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        
        Solution obj;
        int res = obj.arrayOperations(n, arr);
        
        cout<<res<<endl;
        
    }
}

// } Driver Code Ends
