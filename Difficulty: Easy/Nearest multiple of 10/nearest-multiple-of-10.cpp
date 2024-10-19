//{ Driver Code Starts
#include <iostream>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    string roundToNearest(string str)
    {
        int i = str.length()-1;
        if(str[i]-48 <= 5)
            str[i] = '0';
        else
        {
            str[i] = '0';
            i--;
            while(str[i] == '9' and i > -1)
            {
                str[i] = '0';
                i--;
            }
            if(i == -1)
                str = '1'+str;
            else str[i] = str[i]+1;
        }
        return str;
    }
};

//{ Driver Code Starts.

int main() {

    int t;
    cin >> t;
    while (t--) {
        string str;
        cin >> str;
        Solution ob;
        cout << ob.roundToNearest(str) << endl;
    }

    return 0;
}
// } Driver Code Ends