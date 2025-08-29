class Solution
{
    public:
    //Function to find the smallest window in the string s consisting
    //of all the characters of string p.
    bool compare_vector(const vector<int> &a, const vector<int>& b)
    {
        for (int i=0;i<26;i++)
        {
            if (a[i]<b[i])
                return false;
        }
        return true;
    }
    
    string smallestWindow (string s, string p)
    {
        vector<int>sp(26), ss(26);
        int f=0, l=s.size()+1;
        for (char ch : p)
            sp[ch-'a']++;
        for (int i=0, j=0;i<s.size();i++)
        {
            ss[s[i]-'a']++;
            while (compare_vector(ss, sp))
            {
                if (i-j+1<l-f+1)
                    f=j, l=i;
                ss[s[j]-'a']--;
                j++;
            }
        }
        if (l-f+1>s.size())
            return "";
        else return s.substr(f, l-f+1);
    }
};
