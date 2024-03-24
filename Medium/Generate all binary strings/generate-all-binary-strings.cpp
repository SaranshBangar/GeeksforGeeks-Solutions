//{ Driver Code Starts
//Initial Template for C++
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
public:
    void func(int n, string current, vector<string> &result)
    {
        if (current.size()==n)
        {
            result.push_back(current);
            return;
        }
        if (current.empty() || current.back()=='0')
        {
            func(n, current+'0', result);
            func(n, current+'1', result);
        }
        else func(n, current+'0', result);
    }
    vector<string> generateBinaryStrings(int num)
    {
        vector<string>vec;
        func(num, "", vec);
        return vec;
    }
};

//{ Driver Code Starts.
int main(){
    int t = 1;
    cin >> t;


    while(t--){
        //Input
        int n; cin >> n;

        Solution obj;
        
        vector<string> v = obj.generateBinaryStrings(n);
        for(auto it:v) cout<<it<<" ";
        cout << endl;
    }

    return 0;
}

// } Driver Code Ends