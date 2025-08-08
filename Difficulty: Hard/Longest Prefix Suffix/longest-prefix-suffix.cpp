class Solution {
  public:
    int getLPSLength(string &str)
    {
        int n=str.length();
        if (n==0)
            return 0;
        vector<int>lps_array(n, 0);
        int length=0;
        int i=1;
        while (i<n)
        {
            if (str[i]==str[length])
            {
                length++;
                lps_array[i]=length;
                i++;
            } 
            else
            {
                if (length!=0)
                    length=lps_array[length-1];
                else
                {
                    lps_array[i]=0;
                    i++;
                }
            }
        }
        return lps_array[n-1];
    }
};