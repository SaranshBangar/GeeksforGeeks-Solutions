// User function Template for C++

// Complete this function

bool sExists(set<int> s, int x)
{
    auto it=s.find(x);
    if (it!=s.end())
        return true;
    else return false;
}