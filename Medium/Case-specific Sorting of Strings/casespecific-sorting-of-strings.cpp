//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution
{
    public:
    //Function to perform case-specific sorting of strings.
    string caseSort(string str, int n)
    {
        string small="", cap="";
        for (int i=0;i<str.length();i++)
        {
            if ((str[i]-'a')>=0 && (str[i]-'a')<=25)
                small+=str[i];
            else cap+=str[i];
        }
        sort(small.begin(), small.end());
        sort(cap.begin(), cap.end());
        string ans="";
        int j=0, k=0;
        for (int i=0;i<str.length();i++)
        {
            if ((str[i]-'a')>=0 && (str[i]-'a')<=25)
            {
                ans+=small[j];
                j++;
            }
            else
            {
                ans+=cap[k];
                k++;
            }
        }
        return ans;
    }
};

//{ Driver Code Starts.

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		string str;
		cin>>str;
		Solution obj;
		cout<<obj.caseSort (str, n)<<endl;
	}
}
// } Driver Code Ends