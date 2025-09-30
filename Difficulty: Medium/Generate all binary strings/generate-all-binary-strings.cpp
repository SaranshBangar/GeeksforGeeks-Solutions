class Solution {
  public:
    void doGenerate(int n, string currstr, vector<string>& res){
        if(n == 1){
            string str_zero = currstr + '0';
            string str_one = currstr + '1';
            res.push_back(str_zero);
            res.push_back(str_one);
            return;
        }
        doGenerate(n - 1, currstr + '0', res);
        doGenerate(n - 1, currstr + '1', res);
        return;
    }
    vector<string> binstr(int n) {
        vector<string> res;
        string currstr = {};
        doGenerate(n, currstr, res);
        return res;
    }
};