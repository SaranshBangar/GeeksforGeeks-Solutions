class Solution {
  public:
    vector<vector<int>> uniquePerms(vector<int>& arr)
    {
        int n=arr.size();
        vector<vector<int>> ans;
        vector<int> cur, taken(n, 0);
        function<void(int)> helper = [&](int p)
        {
            if(p == n)
            {
                ans.push_back(cur);
                return;
            }  
            vector<int> cur_taken(11, 0);
            for(int i = 0; i < n; i++)
            {
                if(!taken[i] and !cur_taken[arr[i]])
                {
                    cur_taken[arr[i]] = 1;
                    taken[i] = 1;
                    cur.push_back(arr[i]);
                    helper(p + 1);
                    cur.pop_back();
                    taken[i] = 0;
                }
            }
        };
        helper(0);
        sort(ans.begin(), ans.end());
        return ans;
    }
};