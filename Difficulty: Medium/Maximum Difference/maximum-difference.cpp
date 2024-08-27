//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    /*You are required to complete this method */
    int findMaxDiff(vector<int> &arr) {
        int n=arr.size();
          vector<int>ansright(n,0);
        stack<int>st;
        for(int i=n-1;i>=0;i--)
        {
            while(!st.empty() && arr[st.top()]>=arr[i])
                st.pop();
            if(!st.empty())
            ansright[i]=arr[st.top()];
            st.push(i);
        }
        stack<int>st1;
        vector<int>ansleft(n,0);
        for(int i=0;i<n;i++)
        {
            while(!st1.empty() && arr[i]<=arr[st1.top()])
                st1.pop();
            if(!st1.empty())
                ansleft[i]=arr[st1.top()];
            st1.push(i);
        }
        int ans1=0;
        int i=0,j=0;
        while(i<n)
        {
            ans1=max(ans1,abs(ansleft[i]-ansright[j]));
            i++;
            j++;
        }
        return ans1;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    cin.ignore();

    while (t--) {
        string input;
        int num;
        vector<int> arr;

        getline(cin, input);
        stringstream s2(input);
        while (s2 >> num) {
            arr.push_back(num);
        }

        Solution ob;
        cout << ob.findMaxDiff(arr) << endl;
    }
    return 0;
}

// } Driver Code Ends