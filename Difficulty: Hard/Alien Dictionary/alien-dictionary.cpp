//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    string findOrder(vector<string> &words) {
        int n = words.size();
        map<char,vector<char>> adj;
        vector<bool> freq1(26,0),freq2(26,0);
        vector<int> inDegree(26,0);
        for(int i=0;i<n-1;i++){
            int sz1 = words[i].length();
            int sz2 = words[i+1].length();
            for(int j=0;j<sz1;j++){
                if(j>=sz2) return "";
                if(words[i][j]!=words[i+1][j]) {
                    adj[words[i][j]].push_back(words[i+1][j]);
                    freq1[words[i][j]-'a']=1;
                    freq1[words[i+1][j]-'a']=1;
                    inDegree[words[i+1][j]-'a']++;
                    break;
                }
            }
        }
        string ans = "";
        queue<char> q;
        int cnt =0;
        for(int i=0;i<26;i++){
            if(freq1[i]){
                cnt++;
                if(inDegree[i]==0) q.push(i+'a'); 
            }
        }
        while(!q.empty()){
            char u = q.front();
            q.pop();
            ans.push_back(u);
            for(auto &v:adj[u]){
                inDegree[v-'a']--;
                if(inDegree[v-'a'] == 0) { q.push(v);}
            }
        }
        if(ans.length() != cnt) return "";
        for(auto &ele:words){
            for(auto &c:ele) freq2[c-'a']=1;
        }
        for(int i=0;i<26;i++){
            if(freq1[i]==0 and freq2[i]==1) ans.push_back(i+'a');
        }
        return ans;
    }


};


//{ Driver Code Starts.

bool validate(const vector<string> &original, const string &order) {
    unordered_map<char, int> mp;
    for (const string &word : original) {
        for (const char &ch : word) {
            mp[ch] = 1;
        }
    }
    for (const char &ch : order) {
        if (mp.find(ch) == mp.end())
            return false;
        mp.erase(ch);
    }
    if (!mp.empty())
        return false;

    for (int i = 0; i < order.size(); i++) {
        mp[order[i]] = i;
    }

    for (int i = 0; i < original.size() - 1; i++) {
        const string &a = original[i];
        const string &b = original[i + 1];
        int k = 0, n = a.size(), m = b.size();
        while (k < n and k < m and a[k] == b[k]) {
            k++;
        }
        if (k < n and k < m and mp[a[k]] > mp[b[k]]) {
            return false;
        }
        if (k != n and k == m) {
            return false;
        }
    }
    return true;
}

int main() {
    string str;
    getline(cin, str);
    int t = stoi(str);
    while (t--) {
        getline(cin, str);
        stringstream ss(str);
        string curr;
        vector<string> words;
        while (ss >> curr)
            words.push_back(curr);

        vector<string> original = words;

        Solution ob;
        string order = ob.findOrder(words);

        if (order.empty()) {
            cout << "\"\"" << endl;
        } else {
            cout << (validate(original, order) ? "true" : "false") << endl;
        }
        cout << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends