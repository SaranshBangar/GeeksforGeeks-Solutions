class Solution {
  public:
    bool divby13(string &s)
    {
        int rem = 0;
        for (int i = 0; i < s.length(); i++) {
            rem = (rem * 10 + (s[i] - '0')) % 13;
        }
        return rem == 0;
    }
};