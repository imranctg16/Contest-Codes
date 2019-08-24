#include<bits/stdc++.h>
using namespace std;
int main()
{
    double a,b,r,c,d,save;
    int t,counter=1;
    cin>>t;
    while(t--)
    {
       cin>>a>>b>>r>>c>>d;
       r=pow(r,2);
       save=pow(a-c,2)+pow(b-d,2);
       if(save>r)
       {
           printf("Case %d: Outside\n",counter++);
       }
       else if(save<r)
       {
           printf("Case %d: Inside\n",counter++);

       }
       else if(save==r)
       {
              printf("Case %d: OnCircle\n",counter++);
       }
    }
    return 0;
}
