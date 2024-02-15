//{ Driver Code Starts

#include<bits/stdc++.h> 
using namespace std;

// } Driver Code Ends

class Solution{
public:
    bool func(int num, int N)
    {
        int count=0;
        int sqrtNum=sqrt(num);
        for (int i=1;i<=sqrtNum;i++)
        {
            if (num%i==0)
            {
                count++;
                if (num/i!=i)
                    count++;
            }
        }
        return count==N;
    }
    int count(int A,int B,int N)
    {
        int count=0;
        for (int i=A;i<=B;i++)
        {
            if (func(i,N))
                count++;
        }
        return count;
    }
};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int A,B,N;
        cin>>A>>B>>N;
        Solution ob;
        cout << ob.count(A,B,N) << endl;
    }
    return 0; 
}
// } Driver Code Ends