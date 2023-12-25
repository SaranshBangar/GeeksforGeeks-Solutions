//{ Driver Code Starts
//Initial Template for C++
#include <bits/stdc++.h>
#define MULTI(a,b) (a*b) //The multiplication macro function.
/*Whenever MULTI(a,b) is encountered, it is replaced by (a*b) during the preprocessing stage*/
using namespace std;

void macros(int a,int b);


// } Driver Code Ends
//User function Template for C++

void macros(int a,int b)
{
    //See the macro defined at the top of the code. Use that macro to find a*b
    //Use only macro to complete this task
    cout<<a*b;
    cout<<endl;
}

//{ Driver Code Starts.


int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int a,b;
	    
	    //Input a and b
	    cin>>a>>b; 
	    
	    //function call
	    macros(a,b);
	    
	}
	return 0;
}
// } Driver Code Ends
