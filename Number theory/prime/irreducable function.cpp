#include<bits/stdc++.h>
using namespace std;
bitset<10000010> bs;
typedef long long int ll;
typedef vector<int>vi;
vi primes;
ll seive_size;
void seive(ll upperbound)
{
    seive_size=upperbound+2;
    bs.set();
    bs[0]=bs[1]=0;
    primes.push_back(2);
    for ( int i = 4; i <= seive_size; i += 2 )
    {
        bs[i] = 0;
    }
    ll sqrtn =sqrt( seive_size );
    for(ll i=3; i<=seive_size; i=i+2)
    {
        if(bs[i])
        {
            for(ll j=i*i; j<=sqrtn; j=j+(2*i))
            {
                bs[j]=0;
            }
            primes.push_back(i);
        }
    }
}
ll Eulerphi(ll n)
{
    ll pf_idx=0,pf,ans=n;
    pf=primes[pf_idx];
    while(pf*pf<=n)
    {
        if(n%pf==0)
        {
            ans-=ans/pf;
        }
        while(n%pf==0)
        {
            n/=pf;

        }
        pf=primes[++pf_idx];
    }
    if(n!=1)
    {
        ans-=ans/n;
    }
    return ans;
}
int main()
{
    seive(10000000);
    ll number;
    while(1)
    {
        cin>>number;
        if(number==0)
            break;
        cout<<Eulerphi(number)<<endl;
    }

    return 0;
}
