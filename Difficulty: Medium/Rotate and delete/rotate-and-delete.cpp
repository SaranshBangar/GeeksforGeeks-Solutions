//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    int rotateDelete(vector<int> &arr)
    {
        int n=arr.size(); 
        int operations=n/2; 
        deque<int> array(arr.begin(), arr.end());
        for(int k=0;k<operations;k++)
        {
            array.emplace_front(array.back()); 
            array.pop_back();
            array.erase(array.end()-k-1); 
        }
        return array.front();
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
        int res = obj.rotateDelete(arr);
        cout << res << endl;
        // string tl;
        // getline(cin, tl);
    }
    return 0;
}

// } Driver Code Ends