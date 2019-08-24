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
	cout<<"press 0 to break\n";
   ll number;
   while(1)
   {
   	  cin>>number;
   	  if(number==0)
		break;
   	  cout<<bigmod(2,number+1,33554431)<<endl;
   }

	return 0;
}
