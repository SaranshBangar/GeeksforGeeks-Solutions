//{ Driver Code Starts
// C++ program to calculate sum of all numbers present
// in a string containing alphanumeric characters
#include <iostream>
using namespace std;


// } Driver Code Ends


class Solution
{
    public:
    //Function to calculate sum of all numbers present in a string.
    int findSum(string str)
    {
        int ans=0;
        for (int i=0;i<str.length();i++)
        {
            if (str[i]>='0' && str[i]<='9')
            {
                string num="";
                while (str[i]>='0' && str[i]<='9')
                {
                    num+=str[i];
                    i++;
                }
                ans+=stoi(num);
            }
        }
        return ans;
    }
};

//{ Driver Code Starts.

// Driver code
int main()
{
	// input alphanumeric string
	int t;
	cin>>t;
	while(t--)
	{
	    string str;
	    cin>>str;
	    Solution obj;
	    cout << obj.findSum(str);
        cout<<endl;
	
cout << "~" << "\n";
}
	return 0;
}

// } Driver Code Ends