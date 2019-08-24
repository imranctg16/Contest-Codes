#include<bits/stdc++.h>

using namespace std;

int gcd(int a,int b)
{
    return b==0?a:gcd(b,a%b) ;
}

int main()
{
    int a,b,ans;
    while(1)
    {


    cout<<"input two number\n";
    cin>>a>>b;
    ans=gcd(a,b);
    cout<<"ans= "<<ans<<endl;
    }
    return 0;
}
