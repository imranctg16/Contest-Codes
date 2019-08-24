///code for finding frequency of specific prime should look like following:

#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
bitset<1000>bs;
vector<int>primes;
vector<int>factor;
map<ll,ll>prime_list;
ll seive_size=0;
void seive(ll upperbound)
{
    seive_size=upperbound;
    bs.set(); /// shobgular value 1 kore dilam
    bs[0]=bs[1]=0;
    primes.push_back(2);
     for ( int i = 4; i <= seive_size; i += 2 )
     {
          bs[i] = 0;
     }
    ll sqrtn =sqrt( seive_size );
    for(ll i=3;i<=sqrtn;i=i+2) /// we dont want even number to check
    {
        if(bs[i])
        {
          for(ll j=i*i;j<=seive_size;j=j+(2*i))  /// omitting even,, 9,15,21.....
          {
              bs[j]=0;
          }
          primes.push_back((int)i);
        }
    }
}
ll factorial_prime_power(ll n,ll p)
{
    ll freq=0;
    ll x=n;
    while(x)
    {
        freq=freq+(x/p);
        x=x/p;
    }
    return freq;
}


void primefactor(ll n)
{
    int sqrtn=sqrt(n);
    for(int i=0; i<primes.size()&&primes[i]<=sqrtn;i++)
    {
        if(bs[n]) /// if n is a prime,,then it cant be reduced anymore
            break;
        if(n%primes[i]==0)
        {
            while(n%primes[i]==0)
            {
                n/=primes[i];
                factor.push_back((int)primes[i]);
                prime_list[primes[i]]++;
            }
            sqrtn=sqrt(n);
        }
    }
    if(n!=1)
    {
        factor.push_back((int)n);
        prime_list[n]++;
    }
}
int main()
{
    ll n,base;
    while(1)
    {
     cout<<"Enter the factorial!\n";
     cin>>n;
     seive(n);
     cout<<"Enter its base\n";
     cin>>base;
     primefactor(base);
     int x;
     int ans=1e9;
     for(int i=0;i<factor.size();i++)
     {
          cout<<"\tprime= "<<factor[i]<<endl;
          cout<<"prime_list[primes[i]= "<<prime_list[factor[i]]<<endl;
          x=factorial_prime_power(n,factor[i]);
          cout<<"returned x = "<<x<<endl;
          x=x/prime_list[factor[i]];
          ans=min(ans,x);
     }
    cout<<"the factorial has "<<ans<<" trailing zeroes\n";
    }
    return 0;
}
