#include <iostream>
using namespace std;

int main()
{
    int num;
    cin>>num;
    int a=0, b=1;
    for (int i=0;i<num;i++)
    {
        int temp=b;
        b=a+b;
        a=temp;
    }
    cout<<a;
    return 0;
}
