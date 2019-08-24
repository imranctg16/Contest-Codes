///seive method the best one
#include<bits/stdc++.h>
using namespace std;
typedef long long int  ll;
bitset<10000010> bs;
vector<int>primes;
ll seive_size=0;
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
       if(tag)
       {
           cout<<n<<" is a prime\n";
       }
       else
         cout<<"the number is not a prime\n";
   }
}

