//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    int evaluate(vector<string>& arr)
    {
        stack<int>st;
        for(int i=0;i<arr.size();i++)
        {
            if(arr[i]=="+")
            {
                int ele1=st.top();
                st.pop();
                int ele2=st.top();
                st.pop();
                st.push(ele1+ele2);
            }
            else if(arr[i]=="-")
            {
                int ele1=st.top();
                st.pop();
                int ele2=st.top();
                st.pop();
                st.push(-ele1+ele2);
            }
            else if(arr[i]=="*")
            {
                int ele1=st.top();
                st.pop();
                int ele2=st.top();
                st.pop();
                st.push(ele1*ele2);
            }
            else if(arr[i]=="/")
            {
                int ele1=st.top();
                st.pop();
                int ele2=st.top();
                st.pop();
                st.push(ele2/ele1);
            }
            else
            st.push(stoi(arr[i]));
        }
        return st.top();
    }
};


//{ Driver Code Starts.

int main() {
    string str;
    getline(cin, str);
    int t = stoi(str);
    while (t--) {
        getline(cin, str);
        stringstream ss(str);
        vector<string> arr;
        while (ss >> str) {
            arr.push_back(str);
        }
        Solution ob;
        cout << ob.evaluate(arr) << endl;
        cout << "~" << endl;
    }
}
// } Driver Code Ends