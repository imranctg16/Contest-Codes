#include<bits/stdc++.h>
using namespace std;
char bs[10010];
typedef int ll;

ll seive_size;

void seive(ll upperbound)
{

    seive_size=upperbound+2;
    bs[0]=bs[1]=1;

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
}

int main()
{
    seive(10005);
    ios_base::sync_with_stdio(0);
    ll t,number;
    cin>>t;
    while(t--)
    {
        cin>>number;
        if(!bs[number])
        {
            cout<<"Yes\n";
        }
        else
            cout<<"No\n";
    }
    return(0);
}
