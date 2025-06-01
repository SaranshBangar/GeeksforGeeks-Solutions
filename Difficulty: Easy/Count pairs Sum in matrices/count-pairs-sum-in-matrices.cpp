class Solution {
  public:
    int pairs(vector<int>& b, int num, int x){
        int low = 0, high = b.size() - 1, count = 0, idx = -1;
        while (low <= high) {
            int mid = (low + high) / 2;
            if (b[mid] + num == x) {
                idx = mid;
                break;
            }
            else if (b[mid] + num > x) high = mid - 1;
            else low = mid + 1;
        }
        if (idx == -1) return 0;
        else {
            int j = idx;
            while (j < b.size() && b[j] == b[idx]) count++, j++;
            j = idx;
            while (j >= 0 && b[j] == b[idx]) count++, j--;
            
            return count - 1;
        }
    }
    int countPairs(vector<vector<int>> &mat1, vector<vector<int>> &mat2, int x) {
        vector<int> a, b;
        int n = mat1.size();
        for (int i = 0; i < n; i++){
            auto row1 = mat1[i], row2 = mat2[i];
            for (int j = 0; j < n; j++){
                a.push_back(row1[j]);
                b.push_back(row2[j]);
            }
        }
        int count = 0;
        for (int i = 0; i < n * n; i++){
            count += pairs(b, a[i], x);
        }
        return count;
    }
};