// User function Template for C++
class Solution {
  public:
    // Function to remove all occurrences of the character from the string
    void removeCharacter(string &s, char c)
    {
        string str="";
        for (int i=0;i<s.length();i++)
            if (s[i]!=c)
                str+=s[i];
        s=str;
    }
};