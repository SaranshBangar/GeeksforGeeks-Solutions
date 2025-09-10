class Solution {
  public:
    string largestSwap(string &s)
    {
        string s1 = s;
        sort(s1.begin(),s1.end());
        int i=0;
        int n = s.size();
        int j=n-1;
        
        
        int id;
        char ch;
        bool flag = true;
        while(i<n && j>=0){
            if(s[i]!=s1[j]){
                id = i;
                ch = s1[j];
                flag = false;
                break;
            }
            i++;
            j--;
        }
        
        if(flag) return s;
        
        int pt = n-1;
        int idx = -1;
        while(pt>=0){
            if(ch==s[pt]){
                idx = pt;
                break;
            }
            pt--;
        }
        
        swap(s[id],s[idx]);
        
        return s;
    }
};