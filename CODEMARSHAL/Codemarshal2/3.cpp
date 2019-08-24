#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int  m,counter=1,k,take,take2,take3,rest,ans,t;
    cin>>t;
   while(t--)
   {
     cin>>m;
     take=1;
     take2=2;
     rest=(m-3);
     ans=0;
    while(1)
     {
        if(take2>=rest)
            break;

         take3=(rest-(((rest+take2)/2)+1));
         ans+=take3+1;
         //cout<<"take,take2,rest,ans= "<<take<<" "<<take2<<" "<<rest<<" "<<ans<<endl;
         take++;
         take2++;
         rest=m-(take+take2);
     }
     cout<<"Case "<<counter++<<": "<<ans<<endl;

    }
    return 0;
}


