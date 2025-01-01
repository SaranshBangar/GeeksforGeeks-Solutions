//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
#include <unordered_map>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    vector<vector<string>> anagrams(vector<string>& arr)
    {
        unordered_map<string, vector<string>>grps;
        for (const string& word:arr)
        {
            string sorted=word;
            sort(sorted.begin(), sorted.end());
            grps[sorted].push_back(word);
        }
        vector<vector<string>>ans;
        for (auto& grp:grps)
        {
            // sort(grp.second.begin(), grp.second.end());
            ans.push_back(grp.second);
        }
        sort(ans.begin(), ans.end(), [](const vector<string>&a, const vector<string>&b) {
            return a[0]<b[0];
        });
        return ans;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {

        vector<string> arr;
        string input_line;
        getline(cin, input_line);
        stringstream ss(input_line);
        string word;
        while (ss >> word) {
            arr.push_back(word);
        }

        Solution ob;
        vector<vector<string> > result = ob.anagrams(arr);
        sort(result.begin(), result.end());
        for (int i = 0; i < result.size(); i++) {
            for (int j = 0; j < result[i].size(); j++) {
                cout << result[i][j] << " ";
            }
            cout << "\n";
        }

        cout << "~"
             << "\n";
    }

    return 0;
}

// } Driver Code Ends
