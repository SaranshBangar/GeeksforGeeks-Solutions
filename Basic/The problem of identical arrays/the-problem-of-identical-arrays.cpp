//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

int check(int *a, int *b, int n);


int main() {
    
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int a[n], b[n];
        int i;
        for(i = 0; i < n; i++){
            cin>> a[i];
        }
        for(i = 0; i < n; i++){
            cin>> b[i];
        }
        cout << check(a, b, n) << endl;
        
    }
	return 0;
}
// } Driver Code Ends


int check(int *a, int *b, int n)
{
    sort(a, a+n);
    sort(b, b+n);
    for (int i=0;i<n;i++)
    {
        if (a[i]!=b[i])
            return 0;
    }
    return 1;
}