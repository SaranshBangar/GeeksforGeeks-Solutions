class Solution {
  public:
    int longestCommonSum(vector<int> &a1, vector<int> &a2)
    {
        int n = a2.size();
        unordered_map<int,int> sumMap={{0,-1}};
        int sum=0, len=0;
        for(int i=0; i<n; i++)
        {
            int e1=(a1[i])?1:0;
            int e2=(a2[i])?1:0;
            sum+=(e1-e2);
            if(sumMap.count(sum)>0)
                len=max(len,i-sumMap[sum]);
            else sumMap[sum]=i;
        }
        return len;
    }
};