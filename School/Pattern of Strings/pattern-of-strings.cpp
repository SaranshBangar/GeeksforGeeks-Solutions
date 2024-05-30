//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	
	vector<string> pattern(string S)
	{
	    int l=S.length()-1;
	    vector<string>ans;
	    for (int i=l;i>=0;i--)
	    {
	        string str;
	        for (int j=0;j<=i;j++)
	            str+=S[j];
            ans.push_back(str);
	    }
	    return ans;
	}

};

//{ Driver Code Starts.

int main() 
{
   	
   	ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
   
   	int t;
   	string tc;
   	getline(cin, tc);
   	t = stoi(tc);
   	while(t--)
   	{
   		string s;
   		getline(cin, s);

   		Solution ob;

   		vector<string> ans = ob.pattern(s);

   		for(int i = 0; i < ans.size(); i++)
   			cout << ans[i] << "\n";
   		
   	}

    return 0;
}
// } Driver Code Ends