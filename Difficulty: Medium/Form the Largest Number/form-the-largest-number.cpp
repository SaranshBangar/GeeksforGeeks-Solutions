class Solution {
  public:
 bool checkallzero(vector<int> &arr)
  {
      for(int i = 0;i<arr.size();i++)
      if(arr[i]!=0)
      return false;
      
      return true;
  }
    string findLargest(vector<int> &arr) {
        // code here
        vector<string> str;
        if(checkallzero(arr))
        return "0";
        int n = arr.size();
        for(int i = 0;i<n;i++)
        {
            str.push_back(to_string(arr[i]));
        }
        auto comp = [](string a, string b)
        {
           long long int x = stoll((a+b));
           long long int y = stoll((b+a));
           return x<y;
        };
        sort(str.begin(), str.end(), comp);
        string ans = "";
        for(int i = n-1;i>=0;i--)
        ans += str[i];
 
        return ans;
        
    }
};