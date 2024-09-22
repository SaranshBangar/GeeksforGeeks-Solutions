//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

// User function template for C++

class Solution {
public:
    int lps(string str)
    {
        int n=str.length();
        if (n==0)
            return 0;
        vector<int>lps_array(n, 0);
        int length=0;
        int i=1;
        while (i<n)
        {
            if (str[i]==str[length])
            {
                length++;
                lps_array[i]=length;
                i++;
            } 
            else
            {
                if (length!=0)
                    length=lps_array[length-1];
                else
                {
                    lps_array[i]=0;
                    i++;
                }
            }
        }
        return lps_array[n-1];
    }
};


//{ Driver Code Starts.

int main() {

    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        string str;
        cin >> str;

        Solution ob;

        cout << ob.lps(str) << "\n";
    }

    return 0;
}

// } Driver Code Ends