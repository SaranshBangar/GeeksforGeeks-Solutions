//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends


class Solution {
  public:
    int expandAroundCenter(const string &s, int left, int right){
      int count = 0;
      //expand around center while the characters are equal
      while(left >= 0 && right < s.length() && s[left] == s[right]){
          if(right - left + 1 >= 2){
              count++;
          }
          left--;
          right++;
      }
      return count;
  };
  
    int countPS(string &s) {
        // code here
    int n = s.length();
    if(n < 2)   return 0;
    
    int totalCount = 0;
    
    for(int i = 0; i < n; i++){
        
        //odd length palindrome
        totalCount += expandAroundCenter(s, i, i);
        
        //even length palindrome
        totalCount += expandAroundCenter(s, i, i+1);
    }
    
    return totalCount;
    
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        Solution ob;
        cout << ob.countPS(s) << endl;
        cout << "~\n";
    }
    return 0;
}
// } Driver Code Ends
