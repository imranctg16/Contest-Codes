#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define p(x) printf(#x);
vector<ll>vi;





int main()
{
    ios_base::sync_with_stdio(0);
    ll t,take,save,ans,counter=1,number,take2;
    cin>>t;
    while(t--)
    {
        ans=0;
        cin>>number;
        bool flag=false;
        if(number==3)
        {
            ans=2;
            flag=1;
        }
        else
        {
            while(number>1)
            {
                if(number%2==1)
                {
                    number=(number-1)/2;
                    ans=ans+2;
                }
                else if(number%2==0)
                {
                    ans++;
                    number=number/2;
                }

            }
        }
        //cout<<"number= "<<number<<endl;
        if(number==2&&!flag)
        {
            ans++;
        }
        else if(number==3&&!flag)
        {
            ans=ans+2;
        }
        cout<<"Case "<<counter++<<": "<<ans<<endl;
    }
    return(0);
}
