#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll bigmod ( ll b, ll p, ll m ) {
    ll res = 1 % m, x = b % m;
    while ( p ) {
        if ( p & 1 ) res = ( res * x ) % m;
        x = ( x * x ) % m;
        p >>= 1;
    }
    return res;
}
int main()
{
    long long t,number,take2,counter=1,take;
    scanf("%lld",&t);
    while(t--)
	{
		scanf("%lld",&number);
		printf("Case %lld: ",counter++);
		take=bigmod(2,number+1,33554431);
	    printf("%lld\n",take-1);
	}
	return 0;
}
