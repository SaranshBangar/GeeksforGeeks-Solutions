//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


class Array
{
public:
    template <class T>
    static void input(vector<T> &A,int n)
    {
        for (int i = 0; i < n; i++)
        {
            scanf("%d ",&A[i]);
        }
    }

    template <class T>
    static void print(vector<T> &A)
    {
        for (int i = 0; i < A.size(); i++)
        {
            cout << A[i] << " ";
        }
        cout << endl;
    }
};


// } Driver Code Ends

class Solution {
  public:
    int findMagicalNumber(int N, vector<int> &arr)
    {
        int low=0, high=N-1, ans=-1;
        while (low<=high)
        {
            int mid=low+((high-low)/2);
            if (mid==arr[mid])
            {
                ans=mid;
                high=mid-1;
            }
            else if (arr[mid]>mid)
                high=mid-1;
            else low=mid+1;
        }
        return ans;
    }
};


//{ Driver Code Starts.

int main(){
    int t;
    scanf("%d ",&t);
    while(t--){
        
        int N;
        scanf("%d",&N);
        
        
        vector<int> arr(N);
        Array::input(arr,N);
        
        Solution obj;
        int res = obj.findMagicalNumber(N, arr);
        
        cout<<res<<endl;
        
    }
}

// } Driver Code Ends