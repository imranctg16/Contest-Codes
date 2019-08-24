#include<bits/stdc++.h>

using namespace std;

int main()
{
    int number;

    cout<<"Enter a number\n";
    cin>>number;
    while(number>1)
    {
        number/=2;
        cout<<number<<" "<<endl;
    }
    if(number==1)
    {
        cout<<"IT is  a power of 2!\n";
    }
    else
        cout<<"IT is not\n";


    return 0;
}
