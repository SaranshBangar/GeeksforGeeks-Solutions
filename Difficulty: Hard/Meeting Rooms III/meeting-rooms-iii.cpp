//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

// User function Template for C++
class Solution {
  public:
    int mostBooked(int n, vector<vector<int>> &meetings)
    {
        sort(meetings.begin(),meetings.end());
        priority_queue<int,vector<int>,greater<int>>a ;
        for(int i =0;i<n;++i) {
            a.push(i);
        }
        priority_queue<pair<long long,int>,vector<pair<long long,int>>,greater<pair<long long,int>>>b;
        vector<int>cnt(n,0);
        
        for(const auto& m:meetings){
            int s=m[0];
            int l=m[1];
            int t=l-s;
            while(!b.empty() && b.top().first<=s){
                int r=b.top().second;
                b.pop();
                a.push(r);
            }
            if (!a.empty()) {
                int r = a.top();
                a.pop();
                cnt[r]++;
                b.push({l, r});
            } else {
                pair<long long,int>beg=b.top();
                b.pop();
                int r=beg.second;
                long long last=beg.first;
                cnt[r]++;
                long long n=last+t;
                b.push({n,r});
            }
        }
        int max_=-1;
        int res=0;
        for(int i=0;i<n;++i){
            if(cnt[i]>max_){
                max_=cnt[i];
                res =i;
            } else if(cnt[i] ==max_ && i<res)
                res=i;
        }
        return res;
    }
};


//{ Driver Code Starts.

int main() {
    int t, n, m;
    cin >> t;
    while (t--) {
        cin >> n;
        cin >> m;
        vector<vector<int>> meetings(m, vector<int>(2));
        for (int i = 0; i < m; i++) {
            cin >> meetings[i][0] >> meetings[i][1];
        }
        Solution ob;
        cout << ob.mostBooked(n, meetings) << endl;
        cout << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends