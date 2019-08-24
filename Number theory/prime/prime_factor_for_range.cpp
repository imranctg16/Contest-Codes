#include<bits/stdc++.h>
using namespace std;
bitset<100> bs;
typedef vector<int> vi;
vi primes;
int save[100];
void seive(int upperbound)
{
    int sv_size=upperbound+1;
    bs.set();

    bs[0]=bs[1]=0;

    for(int i=2; i<=sv_size; i++)
    {
        if(bs[i])
        {
            for(int j=i*i; j<=sv_size; j+=i)
            {
                bs[j]=0;
            }
            primes.push_back(i);
        }
    }
}
vi primefactor(int n)
{
    vi factor;
    int pf_idx=0,pf;
    pf=primes[pf_idx];
    while(pf*pf<=n)
    {
        while(n%pf==0)
        {
            n/=pf;
            factor.push_back(pf);
        }
        pf=primes[++pf_idx];
    }
    if(n!=1)
    {
        factor.push_back((int)n);
    }
    return factor;
}

int main()
{
    cout<<"how many number\n";
    int n;
    cin>>n;
    int maxx=0;
    for(int i=0; i<n; i++)
    {
        cin>>save[i];
        maxx=max(maxx,save[i]);
    }
    seive(maxx);
    cout<<"prime factor for these range-->\n";
    for(int i=0; i<n; i++)
    {
        int number=save[i];
        cout<<"NUMBER :: "<<number<<endl;
        vi r =primefactor(number);
        for(vi::iterator it=r.begin(); it!=r.end(); it++)
        {
            cout<<(*it)<<" ";
        }
        cout<<endl;
    }
    return 0;
}
