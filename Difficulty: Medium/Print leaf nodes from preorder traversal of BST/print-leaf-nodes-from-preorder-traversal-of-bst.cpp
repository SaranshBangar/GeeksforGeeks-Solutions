class Solution {
  public:
    vector<int> leafNodes(vector<int>& preorder)
    {
        if(preorder.size()==1)
            return preorder;
        vector<int> res1,res2;
        int root=preorder[0];
        for(int i=1;i<preorder.size();i++)
        {
            if(preorder[i]<root)
                res1.push_back(preorder[i]);
            else res2.push_back(preorder[i]);
        }
        vector<int> l,r;
        if(res1.size()!=0)
            l=leafNodes(res1);
        if(res2.size()!=0)
            r=leafNodes(res2);
        vector<int> res(l.size()+r.size());
        merge(l.begin(), l.end(), r.begin(), r.end(), res.begin());
        return res;
    }
};