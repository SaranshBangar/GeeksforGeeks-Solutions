//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
int Count(string S);


int main(){
    int t;
    cin >> t;
    while(t--){
        string S;
        cin >> S;
        cout << Count(S) << endl;
    }
return 0;
}


// } Driver Code Ends


int Count(string S)
{
    int count=0;
    for (auto i : S)
    {
        if ((i>='a' && i<='z') || (i>='A' && i<='Z'))
            count++;
    }
    return count;
}