#include<bits/stdc++.h>
using namespace std;
int main()
{
    int number;
    cout<<"Enter a number\n";
    cin>>number;
    if(number&&!(number&(number-1)))      /// because x and x-1 er & hobee always 0
    {
        cout<<"It is a power of 2 man!\n";
    }
    else
    {
        cout<<"It is not\n";
    }
    return 0;
}
