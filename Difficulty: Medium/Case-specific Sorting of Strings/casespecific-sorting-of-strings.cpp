class Solution {
  public:
    string caseSort(string& s)
    {
        string lw = "";
        string hw = "";
        int n =s.size();
        for(int i=0;i<n;i++)
        {
            if(s[i]>='A' && s[i]<='Z')
                hw += s[i];
            else lw += s[i];
        }
        sort(lw.begin(),lw.end());
        sort(hw.begin(),hw.end());
        int i=0;
        int j=0;
        int k=0;
        string ans = "";
        while(i<n)
        {
            if(islower(s[i]))
            {
                ans+=lw[j];
                j++;
            }
            else
            {
                ans+=hw[k];
                k++;
            }
            i++;
        }
        return ans;
    }
};