class Solution {
  public:
    int powerfulInteger(vector<vector<int>>& intervals, int k)
    {
        map<int, int> freq;
        for (auto& interval : intervals) {
            freq[interval[0]] += 1;
            freq[interval[1] + 1] -= 1;
        }

        int count = 0;
        int maxPowerful = -1;

        for (auto it = freq.begin(); it != freq.end(); ++it) {
            count += it->second;

            auto nextIt = next(it); 
            if (nextIt != freq.end() && count >= k) {
                maxPowerful = max(maxPowerful, nextIt->first - 1);
            }
        }
        return maxPowerful;
    }
};