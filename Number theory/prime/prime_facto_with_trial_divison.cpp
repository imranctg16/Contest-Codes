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


vi primefactor(ll n)
{
    vi factor;

    ll pf_idx=0,pf;
    pf=primes[pf_idx];
    //cout<<"pf= "<<pf<<endl;
    int sqrtn=sqrt(n);
//    while(pf*pf<=n)
//    {
//        while(n%pf==0)
//        {
//            n/=pf;
//            factor.push_back((int)pf);
//        }
//        cout<<"pf= "<<pf<<" and n = "<<n<<endl;
//        pf=primes[++pf_idx];
//    }
    for(int i=0; i<primes.size()&&primes[i]<=sqrtn;i++)
    {
        if(bs[n])
            break;
        if(n%primes[i]==0)
        {
            while(n%primes[i]==0)
            {
                n/=primes[i];
                factor.push_back((int)primes[i]);
            }
            sqrtn=sqrt(n);
        }
    }
    if(n!=1)
    {
        factor.push_back((int)n);
    }
    return factor;
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
    vi r=primefactor(n);

    for(vi::iterator i=r.begin(); i!=r.end(); i++)
    {
        cout<<*i<<" ";
    }
    cout<<endl;
}
