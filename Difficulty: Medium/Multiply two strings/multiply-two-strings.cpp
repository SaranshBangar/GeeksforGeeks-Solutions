//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    /*You are required to complete below function */
    string multiplyStrings(string& s1, string& s2)
    {
        int a=s1.length(),b=s2.length();
        string s="";
        int sign1 = (s1[0] == '-') ? -1 : 1;
        int sign2 = (s2[0] == '-') ? -1 : 1;
        if (s1[0] == '-') {s1=s1.substr(1);a--;}
        if (s2[0] == '-') {s2=s2.substr(1);b--;}
        vector<int>v(a+b,0);
        for(int i=a-1;i>=0;i--){
           for(int j=b-1;j>=0;j--){
               int p=(s1[i]-'0')*(s2[j]-'0');
               int s=p+v[i+j+1];
               v[i+j+1]=s%10;
               v[i+j]+=s/10;
           }
        }
        int finalsign=sign1*sign2;
        for(int i=0;i<v.size();i++) {
          if (finalsign ==-1&&!(s.empty()&&v[i] == 0)) {
              s ="-"+s;finalsign=1;
          }
           if(!(s.empty()&&v[i]==0)) s+=to_string(v[i]);
        }
        return s.empty()?"0":s;
    }
};


//{ Driver Code Starts.

int main() {

    int t;
    cin >> t;
    while (t--) {
        string a;
        string b;
        cin >> a >> b;
        Solution obj;
        cout << obj.multiplyStrings(a, b) << endl;

        cout << "~"
             << "\n";
    }
}
// } Driver Code Ends