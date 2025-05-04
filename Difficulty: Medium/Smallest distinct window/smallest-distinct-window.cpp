//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    int findSubString(string& str)
    {
        set<char>start(str.begin(),str.end());
        map<int,int>mp;
        int st = 0;
        int mini = INT_MAX;
        for(int i = 0;i<str.size();i++){
           mp[str[i]]++;
           while(st<=i && mp.size()==start.size()){
               mini = min(mini,i-st+1);
               mp[str[st]]--;
               if(mp[str[st]] == 0)mp.erase(str[st]);
               st++;
           }
        }
        return mini;
    }
};


//{ Driver Code Starts.
//      Driver code
int main() {
    int t;
    cin >> t;
    while (t--) {

        string str;
        cin >> str;
        Solution ob;
        cout << ob.findSubString(str) << endl;

        cout << "~"
             << "\n";
    }
    return 0;
}
// } Driver Code Ends