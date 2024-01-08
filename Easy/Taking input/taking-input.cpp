//{ Driver Code Starts
//Initial Template for C++


#include<iostream>
using namespace std;

 void inputData();
 

// } Driver Code Ends
//User function Template for C++

 void inputData()
{
       int a;
       string b;
       cin>>a>>b;
       cout<<a<<" "<<b;
}

//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        //function call
        inputData();
        cout<<endl;
    }
}



// } Driver Code Ends