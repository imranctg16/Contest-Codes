#include<bits/stdc++.h>
using namespace std;

bitset<10000010> bs;
typedef long long int ll;
typedef vector<int>vi;
map<ll,ll>prime_list;

vi primes;

ll seive_size;

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

    for(ll i=3; i<=seive_size; i=i+2) /// we dont want even number to check
    {
        if(bs[i])
        {
            for(ll j=i*i; j<=seive_size; j=j+(2*i)) /// omitting even,, 9,15,21.....
            {
                bs[j]=0;
            }
            primes.push_back((int)i);
        }
    }
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
                prime_list[primes[i]]++;
            }
            sqrtn=sqrt(n);
        }
    }
    if(n!=1)
    {
        prime_list[n]++;
    }
}

void factorial_facto(int n)
{

    for(int i=2;i<=n;i++)
    {
       primefactor(i);
    }
}


int main()
{
    cout<<"enter the number to find its factorial_factorization\n";
    ll n;
    cin>>n;
    seive(n);
    //cout<<"seive size= "<<primes.size()<<endl;
    factorial_facto(n);
    for(int i=0;i<primes.size();i++)
    {
           printf ("%d^%d\n",primes[i],prime_list[ primes[i]]);
    }
    cout<<endl;
}
