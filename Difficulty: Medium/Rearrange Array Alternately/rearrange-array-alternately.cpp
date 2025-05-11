//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    void rearrange(vector<int>& arr)
    {
        sort(arr.begin(),arr.end());
        int n=arr.size();
        int l=0,r=n-1;
        vector<int>temp(n,0);
         for(int i=0;i<n;i++)
        {
            if(i%2==0)
            {
                temp[i]=arr[r];
                r--;
            }
            else
            {
                temp[i]=arr[l];
                l++;
            }
        }
        for(int i=0;i<n;i++)
            arr[i]=temp[i];
    }
};


//{ Driver Code Starts.

int main() {
    string ts;
    getline(cin, ts);
    int t = stoi(ts);
    while (t--) {
        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        Solution obj;
        obj.rearrange(arr);
        for (int i = 0; i < arr.size(); i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
        cout << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends