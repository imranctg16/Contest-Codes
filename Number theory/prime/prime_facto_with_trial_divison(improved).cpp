///i changed the sqrtn to seive size
#include<bits/stdc++.h>
using namespace std;
//bitset<10001010> bs;
char bs[10001010];
typedef long long int ll;
typedef vector<ll>vi;
map<ll,ll>m1,m2;
set<ll>s1,s2;
vi primes;
//vi primefactor;
ll seive_size;
map<ll,pair<ll,ll>  >m3;
pair<ll,ll>  p;
void seive(ll upperbound)
{
    ll maxx=0;
    seive_size=upperbound+2;
    //bs.set(); /// shobgular value 1 kore dilam
    bs[0]=bs[1]=1;
    primes.push_back(2);
    for ( ll i = 4; i <= seive_size; i += 2 )
    {
        bs[i] = 1;
    }
    ll sqrtn =sqrt( seive_size );
    for(ll i=3; i<=sqrtn; i=i+2)
    {
        if(!bs[i])
        {
            for(ll j=i*i; j<=seive_size; j=j+(2*i))
            {
                bs[j]=1;
            }
        }
    }
    for ( ll i = 3; i <= seive_size; i += 2 )
    {
        if ( bs[i] == 0 )
        {
            primes.push_back(i);
            maxx=max(maxx,i);

        }
    }
    //cout<<"largest prime= "<<maxx<<endl;
}


vi primefactor(ll n)
{
    vi factor;
    ll sqrtn=sqrt(n);
    for(ll i=0; i<primes.size()&&primes[i]<=sqrtn; i++)
    {
        if(n%primes[i]==0)
        {
            while(n%primes[i]==0)
            {
                n/=primes[i];
                factor.push_back(primes[i]);
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
    cout<<"enter the number to find its factorization\n";
    ll n;
    while(1)
    {
        cin>>n;
        vi r=primefactor(n);
        for(vi::iterator i=r.begin(); i!=r.end(); i++)
        {
            cout<<*i<<" ";
        }
        cout<<endl;
        r.clear();
    }
}
