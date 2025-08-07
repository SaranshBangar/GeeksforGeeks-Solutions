class Solution {
  public:
int timeinsecond(string& s){
      int hour=stoi(s.substr(0,2))*3600;
      int minute=stoi(s.substr(3,2))*60;
      int second=stoi(s.substr(6,2));
      return hour+minute+second;
      
  }
    int minDifference(vector<string> &arr) {
        // code here
        int n=arr.size();
        vector<int>timeinSecond;
        for(string &s:arr){
            timeinSecond.push_back(timeinsecond(s));
        }
        sort(timeinSecond.begin(),timeinSecond.end());
        int mini=INT_MAX;
        
        for(int i=1;i<n;i++){
            mini=min(mini,timeinSecond[i]-timeinSecond[i-1]);    
        }
        int day=24*3600;
        int wrap=(timeinSecond[0]+day)-timeinSecond[n-1];
        mini=min(mini,wrap);
        return mini;
    }
};
