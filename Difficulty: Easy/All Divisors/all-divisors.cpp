class Solution {
  public:
    vector<int> printDivisors(int n)
    {
        vector<int>vec;
        for (int i=1;i<(n/2)+1;i++)
            if (n%i==0)
                vec.push_back(i);
        vec.push_back(n);
        return vec;
    }
};