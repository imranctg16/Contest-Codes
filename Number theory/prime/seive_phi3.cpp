#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define FOR(i,x,y) for(ll i = (x) ; i < (y) ; ++i)
int phi[1000006],mark[1000006];
void seivephi(int n)
{
    phi[0]  = phi[1] = 0;
    FOR(i,2,n)
    {
        phi[i]=i-1;
    }
    FOR(i,1,n)
    {
        for (int j =i+i; j<n; j+= i )
        {
            phi[j]-=phi[i];
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
