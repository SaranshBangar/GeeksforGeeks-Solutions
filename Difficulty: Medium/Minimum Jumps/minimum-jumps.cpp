
class Solution {
  public:
    int minJumps(vector<int>& arr)
    {
        int n=arr.size();
        if(arr[0]==0)
            return -1;
        int jumps=0, l=0, r=0;
        while(r<n-1)
        {
            int farthest=0;
            for(int i=l;i<=r;i++)
                farthest=max(farthest, i+arr[i]);
            if(farthest==0)
                return -1;
            l=r+1;
            r=farthest;
            jumps++;
        }
        return jumps;
    }
};


