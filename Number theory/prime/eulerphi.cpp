///count the number of positive integers<n that are relatively prime to n
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
    while(1)
    {

        cout<<"enter the number\n";
        ll n;
        cin>>n;
        ll r=Eulerphi(n);
        cout<<"Total number is= "<<n<<" is = "<<r<<endl;
    }
}

