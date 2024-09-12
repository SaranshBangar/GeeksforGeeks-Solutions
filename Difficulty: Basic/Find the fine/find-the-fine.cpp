//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends


class Solution {
  public:
    long long int totalFine(int date, vector<int> &car, vector<int> &fine)
    {
        bool even=false;
        if (date%2==0)
            even=true;
        long long int ans=0;
        for (int i=0;i<car.size();i++)
        {
            if (even && car[i]%2==1)
                ans+=fine[i];
            else if (!even && car[i]%2==0)
                ans+=fine[i];
        }
        return ans;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        int date;
        cin >> date;
        cin.ignore();

        vector<int> car;
        string input;
        getline(cin, input); // Read the entire line for the array elements
        stringstream ss(input);
        int number;
        while (ss >> number) {
            car.push_back(number);
        }

        vector<int> fine;
        string input2;
        getline(cin, input2); // Read the entire line for the array elements
        stringstream ss2(input2);
        int number2;
        while (ss2 >> number2) {
            fine.push_back(number2);
        }
        Solution obj;
        cout << obj.totalFine(date, car, fine) << endl;
    }
    return 0;
}

// } Driver Code Ends