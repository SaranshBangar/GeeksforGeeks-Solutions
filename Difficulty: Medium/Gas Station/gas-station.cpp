//{ Driver Code Starts
// C++ program to find union of
// two sorted arrays
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends


/*You are required to complete this method*/
class Solution {
  public:
    int startStation(vector<int> &gas, vector<int> &cost)
    {
        int n = gas.size();
        int totalgas = 0;
        int totalcost = 0;
        for(int i=0;i<n;i++){
            totalgas=totalgas+gas[i];
            totalcost=totalcost+cost[i];
        }
        if(totalgas<totalcost) return -1;
        int currgas = 0;
        int ans = 0;
        for(int i=0;i<n;i++){
            currgas = currgas+(gas[i]-cost[i]);
            if(currgas<0){
                currgas=0;
                ans = i+1;
            }
        }
        return ans;
    }
};



//{ Driver Code Starts.
/* Driver program to test above function */
int main() {
    string ts;
    getline(cin, ts);
    int t = stoi(ts);

    while (t--) {

        vector<int> gas, cost;
        string input1;
        getline(cin, input1);
        stringstream ss(input1);
        int number1;
        while (ss >> number1) {
            gas.push_back(number1);
        }
        string input2;
        getline(cin, input2);
        stringstream sss(input2);
        int number2;
        while (sss >> number2) {
            cost.push_back(number2);
        }
        Solution ob;
        int ans = ob.startStation(gas, cost);

        cout << ans << endl;
        cout << "~\n";
    }

    return 0;
}

// } Driver Code Ends