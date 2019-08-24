#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define FOR(i,x,y) for(ll i = (x) ; i <= (y) ; ++i)
int phi[1000006],mark[1000006];
void seivephi(int n)
{
    FOR(i,1,n)
    {
        phi[i]=i;
    }
    FOR(i,2,n)
    {
        if (phi[i]==i)
        {
            for (ll j = i; j <= n; j+= i )
            {
                phi[j] /= i;
                phi[j] *= (i - 1);
            }
        }
    }
}
int main()
{
    ll number;
    while(1)
    {
        cin>>number;
        if(!number)
            break;

        seivephi(number);
        for(int i=1; i<=number; i++)
        {
            cout<<"i= "<<i<<" = "<<phi[i]<<endl;
        }
        for(int i=1; i<=number; i++)
        {
            mark[i]=0;
            phi[i]=0;
        }
    }
    return 0;
}

