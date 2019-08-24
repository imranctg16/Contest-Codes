#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
    ll n,m,ans;
     ll billion= 10000000000;
    freopen("the last one digit.txt","w+",stdout);
    while(scanf("%lld %lld", &n, &m) == 2)
    {
         ans=1;
       for(ll i=n-m+1;i<=n;i++)
       {
           ans*=i;
           //cout<<"i= "<<i<<" ans= "<<ans<<" \n";
           while(ans%10==0)
           {
               ans/=10;
           }
           ans=ans%billion;
       }
       cout<<ans%10<<endl;
    }
    return 0;
}
