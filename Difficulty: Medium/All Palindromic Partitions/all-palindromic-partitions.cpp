class Solution {
  public:
    vector<vector<string>> res;
    
    bool check(string &s){
        int start = 0 , end = s.length()-1;
        while(start <= end){
            if(s[start] != s[end]) return false;
            start++;
            end--;
        }
        return true;
    }
    
    void solve(string &s , int i , vector<string>&temp){
        if(i >= s.length()){
            res.push_back(temp);
            return;
        }
        
        string tmp;
        for(int j=i;j<s.length();j++){
            tmp.push_back(s[j]);
            if(check(tmp)){
                temp.push_back(tmp);
                solve(s,j+1,temp);
                temp.pop_back();
            }
        }
    }
  
    vector<vector<string>> palinParts(string &s) {
        vector<string> temp;
        solve(s,0,temp);
        return res;
    }
};