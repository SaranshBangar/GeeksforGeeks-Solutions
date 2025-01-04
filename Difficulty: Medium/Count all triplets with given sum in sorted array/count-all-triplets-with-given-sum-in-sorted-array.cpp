//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    int countTriplets(vector<int> &arr, int target) {
        int count=0;
        int n=arr.size();
        for (int i=0;i<n-2;i++)
        {
            int left=i+1;
            int right=n-1;
            while (left<right)
            {
                int sum=arr[i]+arr[left]+arr[right];
                if (sum==target)
                {
                    int left_count=1, right_count=1;
                    while (left<right && arr[left]==arr[left+1])
                    {
                        left++;
                        left_count++;
                    }
                    while (left<right && arr[right]==arr[right-1])
                    {
                        right--;
                        right_count++;
                    }
                    if (left==right)
                        count+=(left_count*(left_count-1))/2;
                    else count+=left_count*right_count;
                    left++;
                    right--;
                }
                else if (sum < target)
                    left++;
                else right--;
            }
        }
        return count;
    }
};

//{ Driver Code Starts.

vector<int> lineArray() {
    string line;
    getline(cin, line);
    stringstream ss(line);
    vector<int> arr;
    int num;
    while (ss >> num) {
        arr.push_back(num);
    }
    return arr;
}

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> arr = lineArray();
        int target;
        cin >> target;
        cin.ignore();

        Solution ob;
        int res = ob.countTriplets(arr, target);
        cout << res << endl;
        cout << "~" << endl;
    }
}

// } Driver Code Ends