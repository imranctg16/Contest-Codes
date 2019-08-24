#include<bits/stdc++.h>

using namespace std;

int main()
{
    int number;
    cout<<"Enter a number\n";
    cin>>number;
    number=number|(number>>1);
    number=number|(number>>2);
    number=number|(number>>4);
    number=number|(number>>8);
    number=number|(number>>16);
    cout<<((number+1)>>1);

    return 0;
}
