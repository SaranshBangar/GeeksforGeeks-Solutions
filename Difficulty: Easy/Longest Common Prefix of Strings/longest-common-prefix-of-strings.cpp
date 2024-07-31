//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

class Solution {
  public:

    string longestCommonPrefix(vector<string> arr)
    {
        string str="";
        int n=arr.size();
        for(int i=0;i<arr[0].size();i++)
        {
            char ch=arr[0][i];
            for(int j=1;j<n;j++)
            {
                if(ch!=arr[j][i])
                {
                    if(str.empty())
                        return "-1";
                    else return str;
                }
            }
          
            str+=ch;
        } 
        return str;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<string> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        string number;
        while (ss >> number) {
            arr.push_back(number);
        }

        Solution ob;
        cout << ob.longestCommonPrefix(arr) << endl;
    }
}

// } Driver Code Ends