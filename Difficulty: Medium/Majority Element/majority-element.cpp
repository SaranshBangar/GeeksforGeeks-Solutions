//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

// User function template for C++

class Solution {
  public:
    int majorityElement(vector<int>& arr)
    {
        int size=arr.size();
        if (size==1)
            return arr[0];
        sort(arr.begin(), arr.end());
        for (int i=0;i<size;i++)
        {
            int count=1;
            while (i<size-1 && arr[i]==arr[i+1])
            {
                count++;
                i++;
            }
            if (count>size/2)
                return arr[i-1];
        }
        return -1;
    }
};


//{ Driver Code Starts.

int main() {

    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        int n;
        vector<int> a, b;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int num;
        while (ss >> num)
            a.push_back(num);

        Solution obj;
        cout << obj.majorityElement(a) << endl;
        cout << "~" << endl;
    }

    return 0;
}

// } Driver Code Ends