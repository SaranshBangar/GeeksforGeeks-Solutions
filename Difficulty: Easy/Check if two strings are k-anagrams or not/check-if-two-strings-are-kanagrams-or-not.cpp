//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

class Solution {
  public:
    bool areKAnagrams(string str1, string str2, int k)
    {
        int n=str1.size(), m=str2.size();
        if(n!=m)
            return 0;
        int freq1[26]={0}, freq2[26]={0};
        for(auto ch: str1)
            freq1[ch-'a']++;
        for(auto ch: str2)
            freq2[ch-'a']++;
        int c=0;
        for(int i=0;i<26;i++)
        {
            if(freq1[i]!=freq2[i])
                c+=abs(freq1[i]-freq2[i]);
        }
        return c/2<=k;
    }
};

//{ Driver Code Starts.

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string str1,str2;
		cin>>str1>>str2;
		int k;
		cin>>k;
		Solution ob;
		if(ob.areKAnagrams(str1, str2, k) == true)
			cout<<"1\n";
		else
			cout<<"0\n";
	}
}
// } Driver Code Ends