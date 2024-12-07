//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    int func2(vector<int> &arr, vector<int> &temp, int left, int right)
    {
        int mid, invcount=0;
        if (left<right)
        {
            mid=(left+right)/2;
            invcount+=func2(arr, temp, left, mid);
            invcount+=func2(arr, temp, mid+1, right);
            invcount+=func1(arr, temp, left, mid, right);
        }
        return invcount;
    }
    int func1(vector<int> &arr, vector<int> &temp, int left, int mid, int right) {
        int i=left, j=mid+1, k=left;
        int invcount=0;
        while (i<=mid && j<=right)
        {
            if (arr[i]<=arr[j])
                temp[k++]=arr[i++];
            else
            {
                temp[k++]=arr[j++];
                invcount+=(mid-i+1);
            }
        }
        while (i<=mid)
            temp[k++]=arr[i++];
        while (j<=right)
            temp[k++]=arr[j++];
        for (int x=left;x<=right;x++)
            arr[x]=temp[x];
        return invcount;
    }
    int inversionCount(vector<int> &arr)
    {
        vector<int>temp(arr.size());
        return func2(arr, temp, 0, arr.size() - 1);
    }
    
};


//{ Driver Code Starts.

int main() {

    int T;
    cin >> T;
    cin.ignore();
    while (T--) {
        int n;
        vector<int> a;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int num;
        while (ss >> num)
            a.push_back(num);
        Solution obj;
        cout << obj.inversionCount(a) << endl;
        cout << "~" << endl;
    }

    return 0;
}

// } Driver Code Ends