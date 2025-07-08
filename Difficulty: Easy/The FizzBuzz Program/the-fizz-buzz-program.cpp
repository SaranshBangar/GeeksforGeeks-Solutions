#include <iostream>
using namespace std;

int main()
{
    int num;
    cin>>num;
    if (num%3==0)
    {
        if (num%5==0)
            cout<<"FizzBuzz";
        else cout<<"Fizz";
    }
    else if (num%5==0)
        cout<<"Buzz";
    else cout<<num;
    return 0;
}