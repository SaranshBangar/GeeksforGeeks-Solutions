//{ Driver Code Starts

#include <bits/stdc++.h>
using namespace std;
string ReverseSort(string str);

int main(){
    int t;
    cin >> t;
    while(t--){

        string s;
        cin >> s;
        cout << ReverseSort(s) << endl;
    }
return 0;
}

// } Driver Code Ends



string ReverseSort(string str)
{
    sort(str.begin(), str.end(), greater<char>());
    return str;
}