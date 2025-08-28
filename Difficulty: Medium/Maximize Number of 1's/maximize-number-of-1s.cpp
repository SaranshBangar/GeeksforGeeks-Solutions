class Solution {
  public:
    int maxOnes(vector<int>& arr, int k)
    {
        stack<int> st;
        vector<int> v;
        int cnt = 0, ans = 0, temp = 0;

        for (int i = 0, j = arr.size() - 1; i < arr.size(); i++, j--) {
            if (arr[j] == 0) {
                st.push(j);
            }

            if (arr[i] == 1) {
                cnt++;
            }

            v.push_back(cnt);

            if (arr[i] == 0) {

                cnt = 0;
            }
        }

        for (int i = 0; i < arr.size(); i++) {

            if (arr[i] == 0 && k == 0) {
                temp = temp - v[st.top()];

                st.pop();
                ans = max(ans, temp);

            }

            else {
                if (arr[i] == 0) {
                    k--;
                }

                temp = temp + 1;
                ans = max(ans, temp);
            }
        }

        return ans;
    }
};
