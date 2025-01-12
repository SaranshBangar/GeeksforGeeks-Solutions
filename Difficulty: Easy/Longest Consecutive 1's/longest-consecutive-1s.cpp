//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

/*  Function to calculate the longest consecutive ones
*   N: given input to calculate the longest consecutive ones
*/
class Solution
{
    public:
    int maxConsecutiveOnes(int N)
    {
        string s=bitset<64>(N).to_string();
        int count=0, ans=0;
        for (int i=0;i<s.length();i++)
        {
            if (s[i]=='1')
            {
                while (s[i]=='1')
                {
                    count++;
                    i++;
                }
                ans=max(ans, count);
                count=0;
            }
            else count=0;
        }
        return ans;
    }
};


//{ Driver Code Starts.

// Driver Code
int main() {
	int t;
	cin>>t;//testcases
	while(t--)
	{
		int n;
		cin>>n;//input n
		Solution obj;
		//calling maxConsecutiveOnes() function
		cout<<obj.maxConsecutiveOnes(n)<<endl;
	
cout << "~" << "\n";
}
	return 0;
}
// } Driver Code Ends