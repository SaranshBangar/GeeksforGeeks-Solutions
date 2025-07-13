#include <iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    if (n>100)
        cout<<"Big";
    else if (n<10)
        cout<<"Small";
    else cout<<"Number";
    return 0;
}