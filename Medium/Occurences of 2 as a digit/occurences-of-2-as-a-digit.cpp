//{ Driver Code Starts
// C++ program to count 2s from 0 to n
#include <bits/stdc++.h>
using namespace std;

/* Counts the number of 2s in a number at d-th
   digit */
long long int count2sinRangeAtDigit(long long int number, long long int d);
/* Counts the number of '2' digits between 0 and n */
long long int numberOf2sinRange(long long int number);

// Driver Coden
int main()
{
    long long int n;
    long long int t;
    cin>>t;
    while(t--)
    {
        cin>>n;
        cout << numberOf2sinRange(n) << endl;
    }
    return 0;
}

// } Driver Code Ends

/* Counts the number of 2s in a number at d-th
   digit */
long long int count2sinRangeAtDigit(long long int number)
{
    long long int num=0;
    while (number)
    {
        if (number%10==2)
            num++;
        number/=10;
    }
    return num;
}

/* Counts the number of '2' digits between 0 and n */
long long int numberOf2sinRange(long long int number)
{
    long long int count=0;
    for (long long int i=1;i<=number;i++)
        count+=count2sinRangeAtDigit(i);
    return count;
}