#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

vector<ll>vi;

int main()
{
    ios_base::sync_with_stdio(0);
    ll t,take,save,ans,counter=1,number;
    cin>>t;
    while(t--)
    {
        ans=0;
        cin>>number;
        while(number)
        {
            cin>>take;
            if(!take)
            {
                number--;
            }
            ans=ans+take;
        }
        cout<<"Case "<<counter++<<": "<<ans<<endl;
    }

    return(0);
}
