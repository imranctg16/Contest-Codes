#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define FOR(i,x,y) for(ll i = (x) ; i <= (y) ; ++i)
map<ll,ll>phi,res;
void precalculate(ll n)
{
    ///Calculate phi from 1 to n using sieve
    FOR(i,1,n)
    {
        phi[i]=i;
    }
    FOR(i,2,n)
    {
        if (phi[i]==i)
        {
            for (ll j = i; j <= n; j+= i )
            {
                phi[j] /= i;
                phi[j] *= (i - 1);
            }
        }
    }
    ///Calculate partial result using sieve
    ///For each divisor d of n, add phi(d)*d to result array
    FOR(i,1,n)
    {
        for (int j=i; j<=n; j+=i)
        {
            res[j]+=(i*phi[i]);
        }
    }
}
int main()
{

    precalculate(10000);
    ll number;
    while(1)
    {
        cin>>number;
        if(!number)
            break;

        ll save=(res[number]+1)*number;
        cout<<save/2<<endl;



    }

    return 0;
}
