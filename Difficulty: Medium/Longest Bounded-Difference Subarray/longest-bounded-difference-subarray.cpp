//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    vector<int> longestSubarray(vector<int>& arr, int x)
    {
        multiset<int> st;
        int n = arr.size();
        int l=0,r=0;
        int ansl=-1,ansr=-1;
        int maxlen = 0;
        while(l<n && r<n)
        {
            st.insert(arr[r]);
            while(!st.empty() && abs((*st.begin()) - *std::prev(st.end()))>x)
            {
                st.erase(st.find(arr[l]));
                l++;
            }

            if(st.size()>maxlen)
            {
                maxlen = st.size();
                ansl = l;
                ansr = r;
            }
            r++;
        }
        vector<int> ans;
        for(int i=ansl;i<=ansr;i++)
            ans.push_back(arr[i]);
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
        string ks;
        getline(cin, ks);
        int k = stoi(ks);
        Solution ob;
        vector<int> ans = ob.longestSubarray(arr, k);
        for (auto it : ans) {
            cout << it << " ";
        }
        cout << endl;
        cout << "~" << endl;
    }
    return 0;
}
// } Driver Code Ends