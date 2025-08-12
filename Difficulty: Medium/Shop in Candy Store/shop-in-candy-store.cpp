class Solution {
  public:
    vector<int> minMaxCandy(vector<int>& prices, int k)
    {
        int n = prices.size();
        
        sort(prices.begin(), prices.end());
        
        // for min cost 
        int minCost = 0;
        int i=0; 
        int j = n-1;
        while(i < n && j >= 0){
            
            minCost += prices[i];
            
            j -= k;
            if(i == j || i > j) break;
            ++i;
        }
        
        /// for maxcost...
        int maxCost = 0;
        i = 0;
        j = n-1;
        while(i < n && j >=0){
            maxCost += prices[j];
            i += k;
            if(i == j || i > j) break;
            --j;
        }
        
        return {minCost, maxCost};
    }
};