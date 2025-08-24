class Solution {
  public:
    int minDaysBloom(vector<int>& arr, int k, int m)
    {
        int s=INT_MAX,e=INT_MIN,result=-1;
        for(auto&v:arr){
            s=min(s,v);
            e=max(e,v);
        }
        while(s<=e){
            int mid=s+(e-s)/2;
            int cnt=0,adjCnt=0;
            for(int i=0;i<arr.size();i++){
                if(mid>=arr[i])adjCnt++;
                else adjCnt=0;
                if(adjCnt==k)cnt++,adjCnt=0;
            }
            if(cnt>=m){
                result=mid;
                e=mid-1;
            }else{
                s=mid+1;
            }
        }
        return result;
    }
};