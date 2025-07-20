class Solution {
  public:
    int countValid(int n, vector<int>& arr)
    {
        int totalPossible = 9;
        
        for(int i=2;i<=n;i++) {
            totalPossible*=10;
        }
        
        int sizeOfArray = arr.size();
        sort(arr.begin(),arr.end());
        if(arr[0]==0) {
            int without = 9-(arr.size()-1);
            for(int i = 2;i<=n;i++) {
                without*=(10-arr.size());
            }
            return totalPossible-without;
            
        } else {
            int without = 9-arr.size();
            for(int i=2;i<=n;i++) {
                without*=(10-arr.size());
            }
            return totalPossible-without;
        }
    }
};
