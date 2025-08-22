class Solution {
  public:
    int median(vector<vector<int>> &matrix)
    {
        int R=matrix.size();
        int C=matrix[0].size();
        int low=INT_MAX,high=INT_MIN;
        for (int i = 0; i < R; i++)
        {
            low=min(low,matrix[i][0]);
            high=max(high,matrix[i][C-1]);
        }
        while (low<high)
        {
            int mid=low+(high-low)/2;
            int count=0;
            for (int i=0;i<R;i++) 
            {
                count+=upper_bound(matrix[i].begin(),matrix[i].end(), mid)-matrix[i].begin();
            }
            if (count<=(R*C)/2)
                low=mid+1;
            else high = mid;
        }
        return low;
    }
};
