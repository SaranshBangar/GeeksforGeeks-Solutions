class Solution {
  public:
    vector<int> topKSumPairs(vector<int>& a, vector<int>& b, int k) {
        vector<int>ans;
        priority_queue<pair<int,pair<int,int>>>pq;
        set<pair<int,int>>vis;
        
        sort(a.begin(),a.end(),greater<int>());
        sort(b.begin(),b.end(),greater<int>());
        int i=0,j=0,n=b.size();
        
        pq.push({a[i]+b[j],{i,j}});
        
        while(ans.size() < k){
            int val = pq.top().first;
            int x = pq.top().second.first;
            int y = pq.top().second.second;
            pq.pop();
            ans.push_back(val);
            if(y+1 < n){
                if(vis.find({x,y+1}) == vis.end()){
                    vis.insert({x,y+1});
                    pq.push({a[x]+b[y+1],{x,y+1}});
                }
            }
            if(x+1 < n){
                if(vis.find({x+1,y}) == vis.end()){
                    vis.insert({x+1,y});
                    pq.push({a[x+1]+b[y],{x+1,y}});
                }
            }
        }
        return ans;
    }
};