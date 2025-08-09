class Solution {
  public:
    int getLongestPrefix(string &s)
    {
        int i = s.length() - 1, j = 0, pos = s.length() - 1, cnt = 0;
   
        while (i > 0 && i < s.length()) {
            if (s[i] == s[j]) {
                j++;
                i++;

            }

            else {
                j = 0;
                pos--;
                i = pos;
            }
        }

        if (i == 0) {
            return -1;
        }

        return pos;
    }
};