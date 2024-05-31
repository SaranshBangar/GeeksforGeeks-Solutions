//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    int swapNibbles(int n)
    {
        int decimal = n;
        bitset<8> binary(decimal);
        for (int i = 0; i < 4; i++)
        {
            int temp = binary[i];
            binary[i] = binary[4+i];
            binary[4+i] =temp;
        }
        return binary.to_ulong();
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        Solution ob;
        cout << ob.swapNibbles(n) << endl;
    }
    return 0;
}
// } Driver Code Ends