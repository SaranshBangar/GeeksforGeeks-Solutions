class Solution {
  public:
    vector<string> generateBinary(int n)
    {
        vector<string> result;
        for (int i = 1; i <= n; i++) {
            string binary = "";
            int num = i;
            while (num > 0) {
                binary = char('0' + (num % 2)) + binary;
                num /= 2;
            }
            result.push_back(binary);
        }
        return result;
    }
};