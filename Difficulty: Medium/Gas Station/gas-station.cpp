class Solution {
  public:
    int startStation(vector<int> &gas, vector<int> &cost)
    {
        int n = gas.size();
        int totalgas = 0;
        int totalcost = 0;
        for(int i=0;i<n;i++){
            totalgas=totalgas+gas[i];
            totalcost=totalcost+cost[i];
        }
        if(totalgas<totalcost) return -1;
        int currgas = 0;
        int ans = 0;
        for(int i=0;i<n;i++){
            currgas = currgas+(gas[i]-cost[i]);
            if(currgas<0){
                currgas=0;
                ans = i+1;
            }
        }
        return ans;
    }
};