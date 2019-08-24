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

bool isprime(int n)
{
    if(n<=seive_size)
        return bs[n];
    /// otherwise in terms of large prime
    for(int i=0;i<primes.size();i++)
    {
        if(n%primes[i]==0)
            return false ;
    }
    return true;
}


int main()
{
   seive(10000000);
   int n;
   cout<<"press 0 to terminate the process\n";
   while(1)
   {
       cin>>n;
       if(n==0)
       {
           break;
       }
       bool tag=isprime(n);
       if(!tag)
       {
           cout<<n<<" is a prime\n";
       }
       else
         cout<<"the number is not a prime\n";
   }
}

