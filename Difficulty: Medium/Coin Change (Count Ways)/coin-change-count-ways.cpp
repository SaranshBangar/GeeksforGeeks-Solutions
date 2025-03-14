//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    int recursive(vector<int>& c,int i,int s){
        if(i==0){
            if(s%c[0]==0) return 1;
            return 0;
        }
        int nottake=recursive(c,i-1,s);
        int take=0;
        if(c[i]<=s) take=recursive(c,i,s-c[i]);
        return nottake+take;
    }
    int dp2D(vector<int>& coins,int sum)
    {
        int n=coins.size();
        vector<vector<int>>v(n,vector<int>(sum+1));
        
        for(int i=0;i<sum+1;i++){
            if(i%coins[0]==0) v[0][i]=1;
        }
        for(int i=1;i<n;i++){
            for(int j=0;j<sum+1;j++){
            int nottake=v[i-1][j];
            int take=0;
            if(coins[i]<=j) take=v[i][j-coins[i]];
            v[i][j]=take+nottake;
            }
        }
        return v[n-1][sum];
    }
    int dpSpaceOptimized(vector<int>& coins,int sum)
    {
        int n=coins.size();
        vector<int>prev(sum+1),curr(sum+1);
        
        for(int i=0;i<sum+1;i++){
            if(i%coins[0]==0) prev[i]=1;
        }
        for(int i=1;i<n;i++){
            for(int j=0;j<sum+1;j++){
                int nottake=prev[j];
                int take=0;
                if(coins[i]<=j) take=curr[j-coins[i]];
                curr[j]=take+nottake;
            }
            prev=curr;
        }
        return prev[sum];
    }
    int count(vector<int>& coins, int sum)
    {
        return dpSpaceOptimized(coins,sum);
    }
};


//{ Driver Code Starts.

int main() {

    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        int sum;
        cin >> sum;
        cin.ignore();
        Solution ob;
        cout << ob.count(arr, sum) << endl;
        cout << "~" << endl;
    }

    return 0;
}

// } Driver Code Ends