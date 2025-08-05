class Solution {
  public:
    bool isPalinSent(string &s)
    {
        string check;
        for (char ch : s)
        {
            if (isalnum(ch)) check += tolower(ch);
        }
        
        int l = 0, r = check.size() - 1;
        while (l < r)
        {
            if (check[l++] != check[r--]) return false;
        }

        return true;
    }
};