//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

class Solution {
  public:
    string minSum(vector<int> &arr)
    {
        sort(arr.begin(),arr.end());
        int n=arr.size();
        int carry=0;
        string sum;
        for(int i=n-1;i>=0;i-=2)
        {
            if(arr[i] == 0)
                break;
            else if(i!=0)
            {
                int x=carry+arr[i]+arr[i-1];
                carry=x/10;
                sum+=(x%10)+'0';
                
            }
            else
            {
                int x=carry+arr[i];
                carry=x/10;
                sum+=(x%10)+'0';
               
            }
            
        }
        if(carry)
            sum+=carry+'0';
        reverse(sum.begin(),sum.end());
        return sum;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> a;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            a.push_back(number);
        }

        Solution ob;
        string ans = ob.minSum(a);
        cout << ans << endl;
        cout << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends