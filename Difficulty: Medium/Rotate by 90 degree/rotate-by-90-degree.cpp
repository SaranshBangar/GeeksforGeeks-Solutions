//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

/* matrix : given input matrix, you are require
 to change it in place without using extra space */
void rotate(vector<vector<int> >& matrix)
{
    int n=matrix.size();
    int m=matrix[0].size();
    for (int i=0;i<n;i++)
    {
        for (int j=i;j<m;j++)
            swap(matrix[i][j], matrix[j][i]);
    }
    for (int i=0;i<n;i++)
    {
        int low=0;
        int high=n-1;
        while(low<=high)
        {
            swap(matrix[i][low],matrix[i][high]);
            low++;
            high--;
        }
    }
}


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<vector<int> > matrix(n);
        for (int i = 0; i < n; i++) {
            matrix[i].resize(n);
            for (int j = 0; j < n; j++)
                cin >> matrix[i][j];
        }
        rotate(matrix);
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < n; j++)
                cout << matrix[i][j] << " ";
            cout << "\n";
        }

        cout << "~"
             << "\n";
    }
    return 0;
}

// } Driver Code Ends