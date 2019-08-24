#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int phi[1000006],mark[1000006];

void seivephi(int n)
{
    for(int i=1; i<=n; i++)
    {
        phi[i]=i;
    }
    phi[1]=1;
    mark[1]=1;
    for(int i=2; i<=n; i++)
    {
        if(!mark[i])
        {
            //cout<<"i = "<<i<<endl;
            for(int j=i; j<=n; j=j+i)
            {
                mark[j]=1;
                phi[j]=phi[j]/i*(i-1);
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
