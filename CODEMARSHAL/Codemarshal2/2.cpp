#include<stdio.h>
using namespace std;
int main()
{
    long long int ans,ans2,a,b,t,counter=1;
    scanf("%lld",&t);
    while(t--)
    {
        scanf("%lld%lld",&a,&b);
        ans=(a-b);
        ans2=ans-1;
         printf("Case %lld: %lld\n",counter++,ans2);
    }
    return  0;
}
