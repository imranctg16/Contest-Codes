#include<bits/stdc++.h>
using namespace std;
bitset<10001010> bs;

typedef long long int ll;
typedef vector<ll>vi;
map<ll,ll>m1,m2;
set<ll>s1,s2;
vi primes;
ll seive_size;
map<ll,pair<ll,ll>  >m3;
pair<ll,ll>  p;

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
            for(ll j=i*i; j<=seive_size; j=j+(2*i))
            {
                bs[j]=0;
            }
            primes.push_back((int)i);
        }
    }
}

vi primefactor(ll n)
{
    vi factor;
    ll sqrtn=sqrt(n);
    for(ll i=0; i<primes.size()&&primes[i]<=sqrtn;i++)
    {
        if(n%primes[i]==0)
        {
            while(n%primes[i]==0)
            {
                n/=primes[i];
                factor.push_back(primes[i]);
                s1.insert(primes[i]);
            }
            sqrtn=sqrt(n);
        }
    }
    if(n!=1)
    {
        factor.push_back(n);
    }
    return factor;
}

int main()
{
    seive(10001000);
    ll n,t;
    cin>>t;
    while(t--)
   {
    cin>>n;
    vi r=primefactor(n);
    cout<<r.size()<<endl;
    r.clear();
   }
}
