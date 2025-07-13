// User function Template for C++

// Complete this function
string Sorted_Characters(string s)
{
    set<char>s1(s.begin(),s.end());
    int i=0;
    string str;
    for(auto i:s1)
        str+=i;
    return str;
}
