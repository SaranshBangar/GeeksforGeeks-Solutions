class Solution {
  public:
    int catchThieves(vector<char> &arr, int k)
    {
        vector<int>p, t;
        for(int i=0; i<arr.size(); i++){
            if(arr[i] == 'P') p.push_back(i);
            else t.push_back(i);
        }
        
        int ans  = 0;
        int st = 0;
        for(int i=0; i<t.size(); i++){
            while(st < p.size()){
                int low = t[i] - k;
                int high = t[i] + k;
                if(p[st] <= high && p[st] >= low){
                    ans++;
                    st++;
                    break;
                }
                else if(p[st] < low){
                    st++;
                }
                else{
                    break;
                }
            }
        }
        return ans;
    }
};