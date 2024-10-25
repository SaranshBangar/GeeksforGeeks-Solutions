//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {

  public:
    vector<int> alternateSort(vector<int>& arr)
    {
        int N=arr.size();
        vector<int>vec(N), ans(N);
	    for (int i=0;i<N;i++)
	        vec[i]=arr[i];
        sort(vec.begin(), vec.end());
        for (int i=N-1, j=0, k=0;i>=j;i--, j++, k+=2)
        {
            ans[k]=vec[i];
            ans[k+1]=vec[j];
        }
        return ans;
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
        vector<int> ans = obj.alternateSort(arr);
        for (int i = 0; i < ans.size(); i++) {
            cout << ans[i] << " ";
        }
        cout << endl;
        cout << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends