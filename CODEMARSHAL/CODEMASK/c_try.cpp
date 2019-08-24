#include<bits/stdc++.h>
#define mod 1007
using namespace std;
typedef long long int ll;

ll f(ll n)
{

    if(n==1||n==2)
    {
        return 1;
    }
    else
    {
        return (f(n-1)+f(n-2));
    }
}
ll g(ll n)
{
    if(n==0)
    {
        return 0;
    }
    else
    {
         return (g(n-1)+f(4*n-1));
    }
}

ll p(ll n)
{
    ll maxx=0;
    for(int i=1;i<=n;i++)
    {
        ll save=g(i)%mod;
        cout<<"save = "<<save<<endl;
        if(save>maxx)
        {
            maxx=save;
        }
    }
    return maxx;
}
int main()
{
    ll t,n;
    cin>>t;
    while(t--)
    {
       cin>>n;
       cout<<p(n)<<endl;
    }
    return 0;
}
