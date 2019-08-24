#include<bits/stdc++.h>
using namespace std;

bitset<10000010> bs;

typedef long long int ll;
typedef vector<int>vi;

vi primes;
//vi primefactor;
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
    ll pf_idx=0,pf,ans=1;
    pf=primes[pf_idx];

    while(pf*pf<=n)
    {
        ll power=0;
        while(n%pf==0)
        {
            n/=pf;
            power++;
        }
        cout<<"pf= "<<pf<<" and n = "<<n<<endl;
        ans *=((ll)pow((double)pf, power + 1.0) - 1) / (pf - 1);
        cout<<"ans = "<<ans<<endl;
        pf=primes[++pf_idx];
    }
    if(n!=1)
    {
        cout<<"n= "<<n<<endl;
        ll temp;
        temp=(pow(n,2) - 1) /(n - 1)+1;
        cout<<"temp= "<<temp<<endl;
        ans *=temp;
        cout<<"ans = "<<ans<<endl;
    }
    return ans;
}

int main()
{
    seive(10000000);
    cout<<"checking seive\n";
    cout<<"enter -1 to break\n";
    int number;
    while(1)
    {
        cin>>number;
        if(number==-1)
            break;
        if(bs[number])
            cout<<"prime!\n";
        else
            cout<<"not prime!\n";
    }
    cout<<"enter the number to find its factorization\n";
    int n;
    cin>>n;
    ll r=primefactor(n);

    cout<<"sum of divisor of "<<n<<" is = "<<r<<endl;
}
