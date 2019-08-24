#include<iostream>
using namespace std;
int main()
{
    long long int t,n;
    cin>>t;
    for(long long int cc=1;cc<=t;cc++)
    {
        cin>>n;
        long long a,b,c;
        a=n*3;
        b=a-1;
        c=a-2;
        cout<<"Case #"<<cc<<": ";
        if(n%2==0)
        {
            cout<<a<<" "<<b<<" "<<c<<"\n";
        }
        else
            cout<<c<<" "<<b<<" "<<a<<"\n";
    }
    return 0;
}
