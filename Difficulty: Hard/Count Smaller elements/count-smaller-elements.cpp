//{ Driver Code Starts

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++
//  User function template for C++

class Solution {
  public:
    vector<int> constructLowerArray(vector<int> &arr) {
        int n = arr.size();
        vector<pair<int, int>> a;
        for(int i=0; i<n; i++)
            a.push_back({arr[i], i});

        vector<int> ans(n, 0);

        mergeSort(a, 0, n-1, ans);

        return ans;
    }

  private:
    void mergeSort(vector<pair<int, int>> &a, int low, int high, vector<int> &ans) {
        if(low >= high)
            return;

        int mid = (low + high) / 2;

        mergeSort(a, low, mid, ans);
        mergeSort(a, mid + 1, high, ans);

        merge(a, low, mid, high, ans);
    }

    void merge(vector<pair<int, int>> &a, int low, int mid, int high, vector<int> &ans) {
        vector<pair<int, int>> temp;
        int i = low, j = mid + 1, index = 0;
        while(i <= mid && j <= high) {
            if(a[i].first > a[j].first) {
                ans[a[i].second] += (high - j + 1);
                temp.push_back(a[i]);
                i++;
            } else {
                temp.push_back(a[j]);
                j++;
            }
        }

        while(i <= mid)
            temp.push_back(a[i++]);

        while(j <= high)
            temp.push_back(a[j++]);

        for(int k = low; k<=high; k++)
            a[k] = temp[index++];
    }
};


//{ Driver Code Starts.
int main() {
    int t;

    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        int n = arr.size();
        Solution ob;
        vector<int> a = ob.constructLowerArray(arr);
        for (int i = 0; i < n; i++) {
            cout << a[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}
// } Driver Code Ends