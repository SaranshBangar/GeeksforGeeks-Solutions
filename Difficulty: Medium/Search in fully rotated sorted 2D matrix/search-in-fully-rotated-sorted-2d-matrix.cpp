class Solution {
  public:
    bool searchMatrix(vector<vector<int>> &mat, int x)
    {
        int m = mat.size();
        int n = mat[0].size();
        int i = 0;
        int j = (n*m)-1;
        while(i<=j){
            int mid = (i+j)/2;
            int lowr = i/n;
            int lowc = i%n;
            int highr = j/n;
            int highc = j%n;
            int midr = mid/n;
            int midc = mid%n;
            if(mat[midr][midc]==x) return true;
            if(mat[lowr][lowc]<=mat[midr][midc]){
                
            
                if(mat[lowr][lowc]<=x && mat[midr][midc]>=x){
                    j = mid-1;
                }   
                else {
                    i = mid+1;
                }
            
                
                
            }
            else{
                if(mat[midr][midc]<=x && x<=mat[highr][highc]){
                    i = mid+1;
                }
                else{
                    j=mid-1;
                }
            }
            
        }
        return false;
    }
};
