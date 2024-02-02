//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution{
  public:
    /*You are required to complete this method */
    int atoi(string str)
    {
        int sign=0;
        if (str[0]=='-')
        {
            str[0]='0';
            sign=-1;
        }
        int num=0;
        for (int i=0;i<str.length();i++)
        {
            if (str[i]=='-' || str[i]=='+')
                return -1;
            if ((str[i]>='a' && str[i]<='z') || (str[i]>='A' && str[i]<='Z'))
                return -1;
            num=num*10+(str[i]-'0');
        }
        if (sign==0)
            return num;
        else return num*-1;
    }
};

//{ Driver Code Starts.
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		cin>>s;
		Solution ob;
		cout<<ob.atoi(s)<<endl;
	}
}
// } Driver Code Ends