///sum of divisor of N prime facto method
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
    int res = 1;
    int sqrtn = sqrt ( n );
    for ( int i = 0; i < primes.size() && primes[i] <= sqrtn; i++ )
    {
        if ( n % primes[i] == 0 )
        {
            int tempSum = 1; //Contains value of (p^0+p^1+...p^a)
            int p = 1;

            while ( n % primes[i] == 0 )
            {
                n /= primes[i];
                p *= primes[i]; /// powering up
                tempSum += p;
            }
            sqrtn = sqrt ( n );
            res *= tempSum;
        }
    }
    if ( n != 1 )
    {
        res *= ( n + 1 ); //Need to multiply (p^0+p^1)
    }
    return res;
}
int main()
{
    seive(10000000);

    cout<<"enter the number to find its sum of divisor\n";
    int n;
    cin>>n;
    cout<<"Ans is = "<<nod(n)<<endl;
}

