#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
vector<ll>vi;
map<ll,int>m1,m2;
set<ll>s1,s2;
void precal(ll number)
{
    ll sum=0,ans=1;
    while(1)
    {
        sum+=ans;
        m1[sum]=ans;
       if(sum>=number)
       {
           break;
       }
        ans++;
    }
}
int main()
{
   ll t,counter,sum,take,number,ans,lock;

   cout<<pre<<endl;
   precal(pre);
   cin>>t;
   while(t--)
   {
       cin>>number;
       cout<<m1[number];
   }
    return 0;
}

