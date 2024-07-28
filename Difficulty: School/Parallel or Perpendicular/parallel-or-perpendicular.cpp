//{ Driver Code Starts


#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends


class Solution{
	public:
	int find(vector<int>A, vector<int>B)
	{
	    int a1=A[0], a2=A[1], a3=A[2], b1=B[0], b2=B[1], b3=B[2];
	    if (((a1*b1)+(a2*b2)+(a3*b3))==0)
	        return 2;
        else if (((pow(((a2*b3)-(a3*b2)), 2))-(pow(((a1*b3)-(b1*a3)), 2))+(pow(((a1*b2)-(a2*b1)), 2)))==0)
            return 1;
        return 0;
	}
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		vector<int>A(3), B(3);
		for(int i = 0; i < 3; i++)cin >> A[i];
		for(int i = 0; i < 3; i++)cin >> B[i];
		Solution ob;
		int ans = ob.find(A, B);
		cout << ans <<"\n";
	}  
	return 0;
}
// } Driver Code Ends
