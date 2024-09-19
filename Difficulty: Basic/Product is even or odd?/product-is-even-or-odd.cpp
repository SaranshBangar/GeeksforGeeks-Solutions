//{ Driver Code Starts
#include <iostream>
using namespace std;

int EvenOdd(string n1 , string n2);

// driver code
int main()
{
   int t;
   cin>>t;
   for(int i=0;i<t;i++)
   {
       string n1;
       cin>>n1;
       string n2;
       cin>>n2;
       cout<<EvenOdd(n1 , n2)<<endl;
   }
    return 0;
}

// } Driver Code Ends


int EvenOdd(string n1 , string n2)
{
    int num=(n1[n1.length()-1]-'0')*(n2[n2.length()-1]-'0');
    if (num%2==0)
        return 1;
    return 0;
}
