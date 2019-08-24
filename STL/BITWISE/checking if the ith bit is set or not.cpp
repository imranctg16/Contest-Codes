#include<bits/stdc++.h>

using namespace std;

int main()
{
    int number,i;

    cout<<"enter the number\n";
    cin>>number;
    cout<<"enter the bit number\n";
    cin>>i;

    if(number&1<<i)
    {
        cout<<"the bit was set\n";
    }
    else
        cout<<"the bit was 0\n";


    return 0;
}
