//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    long long countPairs(vector<int> &arr, vector<int> &brr)
    {
        long long ans=0;
        sort(arr.begin(),arr.end());
        sort(brr.begin(),brr.end());
        for(auto i:arr)
        {
            if(i!=1)
                ans+=brr.end()-lower_bound(brr.begin(),brr.end(),i+1);
        }
        for(auto i:brr)
        {
            if(i==1)
                ans+=arr.end()-lower_bound(arr.begin(),arr.end(),i+1);
            else break;
        }
        ans+=count(arr.begin(),arr.end(),3)*count(brr.begin(),brr.end(),2);
        ans-=count(arr.begin(),arr.end(),2)*count(brr.begin(),brr.end(),3);
        ans-=count(arr.begin(),arr.end(),2)*count(brr.begin(),brr.end(),4);
        return ans; 
    }
};

//{ Driver Code Starts.

int main() {
    int T;
    cin >> T;
    cin.ignore();
    while (T--) {
        vector<int> ex;
        vector<int> a, b;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int num;
        while (ss >> num)
            ex.push_back(num);
        a = ex;
        getline(cin, input);
        ss.clear();
        ss.str(input);
        int num2;
        while (ss >> num2)
            b.push_back(num2);

        Solution ob;
        cout << ob.countPairs(a, b) << endl;
    }
}
// } Driver Code Ends