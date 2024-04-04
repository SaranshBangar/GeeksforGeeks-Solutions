//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends


class Solution
{
    public:
    //Function to find the maximum occurring character in a string.
    char getMaxOccuringChar(string str)
    {
        vector<int>vec(26, 0);
        for (int i=0;i<str.length();i++)
        {
            vec[str[i]-'a']++;
        }
        int count=INT_MIN, ans=0;
        for (int i=0;i<26;i++)
        {
            if (count<vec[i])
            {
                count=vec[i];
                ans=i;
            }
        }
        char ret='a'+ans;
        return ret;
    }

};

//{ Driver Code Starts.

int main()
{
   
    int t;
    cin >> t;
    while(t--)
    {
        string str;
        cin >> str;
    	Solution obj;
        cout<< obj.getMaxOccuringChar(str)<<endl;
    }
}
// } Driver Code Ends