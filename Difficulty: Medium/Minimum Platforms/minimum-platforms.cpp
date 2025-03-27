//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    // Function to find the minimum number of platforms required at the
    // railway station such that no train waits.
    int findPlatform(vector<int>& arr, vector<int>& dep)
    {
        int n = arr.size();
    	vector<int> time(2361, 0);
    	for(int i = 0; i < n; i++)
    	{ 
    	   time[arr[i]]+=1;
    	   time[dep[i]+1]-=1;
    	}
    	int maxCnt = 0, sum = 0;
    	for(int i = 0; i < 2361; i++)
    	{
    	    sum += time[i];
    	    maxCnt = max(maxCnt, sum);
    	}
    	return maxCnt;
    }
};



//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> arr, dep;
        string input;

        // Read first array (arr)
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }

        // Read second array (dep)
        getline(cin, input);
        stringstream ss2(input);
        while (ss2 >> number) {
            dep.push_back(number);
        }

        // Assuming Solution class is defined elsewhere with a method findPlatform
        Solution ob;
        cout << ob.findPlatform(arr, dep);

        cout << endl;
        cout << "~\n";
    }
    return 0;
}

// } Driver Code Ends