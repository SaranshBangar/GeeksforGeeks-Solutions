class Solution {
  public:
    vector<string> ans;
    unordered_map<int, string> mp;
    void solve(int i, int& n, string s, vector<int>& arr){
        if (i == n){
            ans.push_back(s);
            return;
        }
        if (arr[i] <= 1){
            solve(i+1, n, s, arr);
            return;
        }
        for (char ch : mp[arr[i]]){
            solve(i+1, n, s+ch, arr);
        }
    }
    vector<string> possibleWords(vector<int> &arr)
    {
        int n = arr.size();
        mp[2] = "abc";
        mp[3] = "def";
        mp[4] = "ghi";
        mp[5] = "jkl";
        mp[6] = "mno";
        mp[7] = "pqrs";
        mp[8] = "tuv";
        mp[9] = "wxyz";
        solve(0, n, "", arr);
        return ans;
    }
};