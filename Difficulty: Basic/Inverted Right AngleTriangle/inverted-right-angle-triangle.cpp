class Solution {
  public:
    void printPattern(int n)
    {
        for(int i=0;i<n;i++)
        {
            for(int j=i;j<n;j++)
                cout<<"* ";
            cout<<endl;
        }
    }
};
