#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n;
    cin>>n;
    if (n==1 || n==2 || n==3)
    {
        cout<<"True";
        return 0;
    }
    for (int i=2;i<sqrt(n)+1;i++)
    {
        if (n%i==0)
        {
            cout<<"False";
            return 0;
        }
    }
    cout<<"True";
    return 0;
}
