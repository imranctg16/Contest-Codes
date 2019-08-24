///count the number of positive integers<n that are relatively prime to n
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
ll primefactor(ll n)
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
    cout<<"enter the number\n";
    int n;
    cin>>n;
    ll r=primefactor(n);
    cout<<"Total number is= "<<n<<" is = "<<r<<endl;
}

