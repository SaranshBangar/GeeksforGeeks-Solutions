class Solution {
public:
    bool isOK(int mid, vector<int>& arr, int k, int w) {
        int n = arr.size();
        vector<int> diff(n + w + 1, 0);
        int ops = 0;

        for (int i = 0; i < n; i++) {
            if (i > 0)
                diff[i] += diff[i - 1];

            int curr_height = arr[i] + diff[i];

            if (curr_height < mid) {
                int add = mid - curr_height;
                ops += add;
                if (ops > k) return false;

                diff[i] += add;
                diff[i + w] -= add;
            }
        }

        return true;
    }

    int maxMinHeight(vector<int>& arr, int k, int w) {
        int low = *min_element(arr.begin(), arr.end());
        int high = 1e9;
        int ans = low;

        while (low <= high) {
            int mid = (low + high) / 2;

            if (isOK(mid, arr, k, w)) {
                ans = mid;
                low = mid + 1;
            } else {
                high = mid - 1;
            }
        }

        return ans;
    }
};