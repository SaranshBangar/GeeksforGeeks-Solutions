class Solution {
  public:
    int minValue(string &s, int k)
    {
        unordered_map<char,int> mp;
        for(auto i: s)
            ++mp[i];
        
        priority_queue<int> pq;
        for(auto i: mp)
            pq.push(i.second);
        
        while(k--)
        {
            int t = pq.top();
            pq.pop();
            --t;
            if(t) pq.push(t);
        }
        
        int out = 0;
        while(!pq.empty())
        {
            out += pq.top() * pq.top();
            pq.pop();
        }
        
        return out;
    }
};