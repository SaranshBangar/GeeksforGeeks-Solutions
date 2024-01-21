//{ Driver Code Starts
#include <iostream>
using namespace std;

int calcSum(int a,int b,int c);

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int a,b,c;
	    cin>>a>>b>>c;
	    int sum = calcSum(a,b,c);
	    cout<<sum<<"\n";
	}
	
	return 0;
}
// } Driver Code Ends




/*  Write your function here */

/* The function should be named calcSum
    and accepts three parameters of integer type
    and returns the sum of the three integers */
    
int calcSum(int a, int b, int c)    
{
    return a+b+c;
}