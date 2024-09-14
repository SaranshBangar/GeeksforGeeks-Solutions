//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
// User function template for C++
class Solution {
  public:

    void rearrange(vector<int> &arr)
    {
        vector<int>pos;
	    vector<int>neg;
	    for (int i=0;i<arr.size();i++)
	    {
	        if (arr[i]>=0)
	            pos.push_back(arr[i]);
	        else neg.push_back(arr[i]);
	    }
	    int p=0, n=0, a=0;
	    while (p<pos.size() && n<neg.size())
	    {
	        arr[a]=pos[p];
            arr[a+1]=neg[n];
            p++;
            n++;
            a+=2;
	    }
	    while (p<pos.size())
	        arr[a++]=pos[p++];
        while (n<neg.size())
            arr[a++]=neg[n++];
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
        int num;

        getline(cin, input);
        stringstream s2(input);
        while (s2 >> num) {
            arr.push_back(num);
        }
        Solution ob;
        ob.rearrange(arr);
        for (int i = 0; i < arr.size(); i++) {
            cout << arr[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}

// } Driver Code Ends