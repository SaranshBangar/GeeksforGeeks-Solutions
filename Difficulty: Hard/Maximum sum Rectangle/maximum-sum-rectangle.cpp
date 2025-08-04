class Solution {
    private:
    int kadansAlgorithm(vector<int> &temp){
        int sum=0;
        int maxi= INT_MIN;
        for (int i=0; i<temp.size(); i++){
            sum+= temp[i];
            maxi= max(sum, maxi);
            if(sum<0)
            sum= 0;
        }
        return maxi;
    }
  public:
    int maxRectSum(vector<vector<int>> &mat) {
      int maxRectangle= INT_MIN;
      for (int left=0; left<mat[0].size(); left++){
          vector<int> temp(mat.size(), 0);
          for (int right=left; right<mat[0].size(); right++){
              for (int i=0; i<mat.size(); i++){
                  temp[i]+= mat[i][right];
              }
              
              int currSum= kadansAlgorithm(temp);
              maxRectangle= max(maxRectangle, currSum);
              
          }
      }
      return maxRectangle;
        
    }
};