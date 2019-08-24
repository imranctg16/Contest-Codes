///segmented seive
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef vector<int> vi;
vector<int>primes;
bitset<10000000> bs;
int arr[10000000];
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
    for(ll i=3;i<=seive_size;i=i+2) /// we dont want even number to check
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
void segmented_seive(ll a,ll b)
{

    int sizee=sqrt(b);
    seive(sizee);
    memset (arr,0,sizeof arr );
    if(a==1)
        a++;
    for(int i=0;i<primes.size()&&primes[i]<=sizee;i++)
    {
        int p=primes[i];
        int j=p*p;
        if(j<a)
        {
            j=ceil(a/(double)p)*p;
        }
        for(;j<=b;j+=p)
        {
            arr[j-a]=1;
        }
    }
}
int main()
{
    ll a,b;
    cin>>a>>b;
    segmented_seive(a,b);
    cout<<"-1 to break \n";
    while(1)
    {
        cout<<"enter a number\n";
        int number;
        cin>>number;
        if(number<0)
            break;
        if(!arr[number-a])
        {
            cout<<"it is a prime!\n";
        }
        else
            cout<<"not prime\n";
    }
    return 0;
}
