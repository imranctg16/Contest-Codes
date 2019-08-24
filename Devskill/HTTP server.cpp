#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
vector<ll> container;
#define pb push_back
#define pp pop_back



int main()
{
    ios_base::sync_with_stdio(0);
    ll t,number,get,post,deletee,update,duration,r,counter=1;
    string x;
    cin>>t;
    while(t--)
    {
        cin>>get>>post>>update>>deletee;
        cin>>duration>>r;
        for(int i=1; i<=r; i++)
        {
            cin>>x;
            if(x=="GET")
            {
                container.pb(get);
            }
            else if(x=="POST")
            {
                container.pb(post);
            }
            else if(x=="UPDATE")
            {
                container.pb(update);
            }
            else if(x=="DELETE")
            {
                container.pb(deletee);
            }
        }
        sort(container.begin(),container.end());
        ll checker=0,ans;
        for(int i=0; i<container.size(); ++i)
        {
            checker+=container[i];
            if(checker>duration)
            {
                ans=i;
                break;
            }
            else
                ans=i;
            if(ans>=r-1)
            {
                ans=r;
            }
        }
        cout<<"Case "<<counter++<<": "<<ans<<endl;
        container.clear();
    }
    return(0);
}
