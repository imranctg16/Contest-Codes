#include<bits/stdc++.h>
using namespace std;


int gcd(int a,int b)
{
    return b==0?a:gcd(b,a%b) ;
}
int lcm ( int a, int b ) {
    return ( a / gcd ( a, b ) ) * b;
}

int main()
{
    int a,b,ans;
    cout<<"enter two number\n";
    cin>>a>>b;
    ans=lcm(a,b);
    cout<<"ans is "<<ans<<endl;

    return 0;
}
