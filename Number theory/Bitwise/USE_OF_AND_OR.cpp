#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b;
    while(1)
    {
    cout<<"Enter two number\n";

    cin>>a>>b;

    cout<<"ANd value= \n";
    //cout<<a & b<<endl;
    printf ("%d\n", a & b );
    cout<<"or value\n";

    printf ( "%d\n", a | b );

    cout<<"Xor value\n";
    printf ( "%d\n", a ^ b );

}
    return 0;
}
