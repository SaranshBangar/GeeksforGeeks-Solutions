//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
public:
    stack<int>st;
    unordered_map<int, int>m;
    int mini=INT_MAX;
    
    Solution() {}

    // Add an element to the top of Stack
    void push(int x)
    {
        mini=min(mini, x);
        m[x]++;
        st.push(x);
    }

    // Remove the top element from the Stack
    void pop()
    {
        if (st.empty())
            return;
        m[st.top()]--;
        if (m[st.top()] == 0)
            m.erase(st.top());
        if (mini==st.top())
        {
            mini=INT_MAX;
            for (auto& i : m)
                mini = min(mini, i.first);
        }
        st.pop();
    }

    // Returns top element of the Stack
    int peek()
    {
        if (st.empty())
            return -1;
        return st.top();
    }

    // Finds minimum element of Stack
    int getMin() { return mini == INT_MAX ? -1 : mini; }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int q;
        cin >> q;

        Solution ob;

        while (q--) {
            int qt;
            cin >> qt;

            if (qt == 1) {
                // push
                int att;
                cin >> att;
                ob.push(att);
            } else if (qt == 2) {
                // pop
                ob.pop();
            } else if (qt == 3) {
                // peek
                cout << ob.peek() << " ";
            } else if (qt == 4) {
                // getMin
                cout << ob.getMin() << " ";
            }
        }
        cout << endl;
        cout << "~" << endl;
    }

    return 0;
}

// } Driver Code Ends