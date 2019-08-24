#include<bits/stdc++.h>
using namespace std;
#define debug cout<<"came here"<<endl;
#define output freopen("output.txt","w+",stdout);
#define pb push_back;
#define pp pop_back;
typedef long long int ll;
typedef vector<ll>vi;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    ll t,n,save,save2,counter=1;
    cin>>t;
    while(t--)
    {
       cin>>n;
       save=n*3;
       save2=save/3;
       cout<<"Case #"<<counter++<<": ";
       if(save2%2==0)
       {
           cout<<save<<" "<<save-1<<" "<<save-2<<endl;
       }
       else
       {
           cout<<save-2<<" "<<save-1<<" "<<save<<endl;
       }
    }
    return(0);
}
