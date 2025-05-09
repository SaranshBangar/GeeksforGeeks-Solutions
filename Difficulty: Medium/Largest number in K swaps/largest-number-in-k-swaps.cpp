//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends



class Solution {
  public:
  void Solve(string &ans,string str,int k,int idx)
  {
      if(k==0 || idx>=str.size())
      return;
      char maxC=str[idx];
      for(int i=idx+1;i<str.size();i++){
          if(str[i]>maxC)
          maxC=str[i];
      }
      if(maxC!=str[idx])
      k--;
      for(int i=idx;i<str.size();i++){
          if(maxC==str[i]){
          swap(str[idx],str[i]);
          if(str.compare(ans)>0)
          ans=str;
          Solve(ans,str,k,idx+1);
          swap(str[idx],str[i]);
          }
      }
  }
    string findMaximumNum(string& s, int k) {
        string ans=s;
        Solve(ans,s,k,0);
        return ans;
    }
};


//{ Driver Code Starts.

int main() {
    int t, k;
    string str;

    cin >> t;
    while (t--) {
        cin >> k >> str;
        Solution ob;
        cout << ob.findMaximumNum(str, k) << endl;

        cout << "~"
             << "\n";
    }
    return 0;
}

// } Driver Code Ends