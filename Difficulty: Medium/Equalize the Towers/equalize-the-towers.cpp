class Solution {
  public:
    int check(int mid,vector<int>&height,vector<int>&cost)
    {
        int ans=0;
        for(int i=0;i<height.size();i++)
            ans+=abs(height[i]-mid)*(cost[i]);
        return ans;
    }
    int minCost(vector<int>& heights, vector<int>& cost)
    {
        int ans=0;
        int l=1;
        int h=1000000;
        while(l<=h){
            int mid=(l+h)/2;
            auto current=check(mid,heights,cost);
            auto up=check(mid+1,heights,cost);
            auto down=check(mid-1,heights,cost);
            if(current<up and current>down)
                h=mid-1;
            else if(current>up and current<down)
                l=mid+1;
            else
            {
                ans=current;
                return ans;
            }
        }
        return ans;
    }
};
