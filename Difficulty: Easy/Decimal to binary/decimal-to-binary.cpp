#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int num;
    cin>>num;
    string str="";
    while (num)
    {
        str+=to_string(num%2);
        num/=2;
    }
    reverse(str.begin(), str.end());
    cout<<str;
    return 0;
}
