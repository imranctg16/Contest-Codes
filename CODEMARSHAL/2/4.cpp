#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef vector<ll>vi;
map<ll,ll>m;

int main()
{
    ll t,n,number;
    cin>>t;
    vi v,save;
    while(t--)
    {
        cin>>n;
        for(int i=1; i<=n; i++)
        {
            cin>>number;
            save.push_back(number);
            m[number]++;
        }
        sort(save.begin(),save.end());

    }
    return 0;
}
