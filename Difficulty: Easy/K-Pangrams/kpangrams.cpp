//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:

    bool kPangram(string str, int k)
    {
        if (str.length()<26)
            return false;
        unordered_map<char, int>mp;
        int count=0;
        for (int i=0;i<str.length();i++)
        {
            if (str[i]>='a' && str[i]<='z')
            {
                mp[str[i]]++;
                count++;
            }
        }
        if (mp.size()>=26 || (count>=26 && (mp.size()+k>=26)))
            return true;
        return false;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        cin.ignore();
        string str;
        getline(cin, str);

        int k;
        cin >> k;

        Solution ob;
        bool a = ob.kPangram(str, k);
        if (a)
            cout << "true" << endl;
        else
            cout << "false" << endl;
    }
    return 0;
}
// } Driver Code Ends