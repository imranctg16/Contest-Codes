///counting the number of divisor
/// it will only give the total number of divisor,to get the divisor(use loop method);
#include<bits/stdc++.h>
using namespace std;
bitset<10000010> bs;
typedef long long int ll;
typedef vector<int>vi;
vi primes;
vi divisor;
ll seive_size;
void seive(ll upperbound)
{
    seive_size=upperbound+2;
    bs.set(); /// shobgular value 1 kore dilam
    bs[0]=bs[1]=0;
    primes.push_back(2);
    for ( int i = 4; i <= seive_size; i += 2 )
    {
        bs[i] = 0;
    }
    ll sqrtn =sqrt( seive_size );
    for(ll i=3; i<=sqrtn; i=i+2) /// we dont want even number to check
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
int nod (ll n)
{
    int sqrtn=sqrt(n);
    int ans=1;
    for(int i=0; i<primes.size()&&primes[i]<=sqrtn; i++)
    {
        if(bs[n]) /// if n is a prime,,then it cant be reduced anymore
            break;
        if(n%primes[i]==0)
        {
            int power=0;
            while(n%primes[i]==0)
            {
                n/=primes[i];
                power++;
            }
            sqrtn=sqrt(n);
            ans=ans*(power+1);
        }
    }
    if(n!=1)
    {
       ans=ans*2;
    }
    return ans;
}
int main()
{
    seive(10000000);
    cout<<"enter the number to find its factorization\n";
    int n;
    cin>>n;
    int r=nod(n);
    cout<<n<<" has total "<<r<<" divisors\n";
}

