//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std;

// } Driver Code Ends
class Solution{
public:
    bool func(int num)
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
        return (count%2!=0);
    }
    int count(int N)
    {
        int count=0;
        for (int i=1;i<=N;i++)
        {
            if (func(i))
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
        int N;
        cin>>N;
        Solution ob;
        cout << ob.count(N) << endl;
    }
    return 0; 
}
// } Driver Code Ends