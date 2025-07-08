#include <iostream>
using namespace std;

int main()
{
    int num;
    cin>>num;
    int ans=0;
    while (num)
    {
        num/=10;
        ans++;
    }
    cout<<ans;
    return 0;
}