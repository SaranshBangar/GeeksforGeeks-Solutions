class Solution {
  public:
    vector<vector<int>> combinationSum(int n, int k) {

        // code here

        vector<vector<int>> result;

        vector<int> current;

        backtrack(1, k, n, current, result);

        return result;

    }

 

  private:

    void backtrack(int start, int k, int target, 

                   vector<int>& current, vector<vector<int>>& result) {

        if (k == 0 && target == 0) {

            result.push_back(current);

            return;

        }

        if (k == 0 || target <= 0) return;

        

        for (int i = start; i <= 9; i++) {

            current.push_back(i);

            backtrack(i + 1, k - 1, target - i, current, result);

            current.pop_back();

        }

    }
};