// User function Template for C++

/*
str: string containing english alphabet letters
*/
bool checkPangram(string &s)
{
    unordered_map<char, int>mp;
    for (int i=0;i<s.length();i++)
        mp[tolower(s[i])]++;
    return (mp.size()==26);
}
