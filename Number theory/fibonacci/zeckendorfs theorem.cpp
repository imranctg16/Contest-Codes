#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
const long M = 1000000007; // modulo
vector<ll>vi;
map<ll, ll> F;


ll f(ll n)
{
    if (F.count(n))
            return F[n];
    ll k=n/2;
    if (n%2==0)   // n=2*k
    {
        return F[n] = (f(k)*f(k) + f(k-1)*f(k-1)) % M;
    }
    else     // n=2*k+1
    {
        return F[n] = (f(k)*f(k+1) + f(k-1)*f(k)) % M;
    }
}
void precal(ll number)
{
		vi.push_back(0);

        F[0]=F[1]=1;
        for(ll i=0;i<number;i++)
		{
			if(i==0)
			{
				vi.push_back(F[0]);
			}
			else if(i==1)
			{
				vi.push_back(F[1]);
			}
			else
			{
				vi.push_back(f(i-1));
			}
		}
}



int main()
{
    ll number;
    precal(100);

    while(cin>>number&&number!=0)
    {
        while(number>0)
        {
            for(int i=0; i<vi.size(); i++)
            {
                ll take=vi[i];
                if(vi[i+1]>number)
                {
                    cout<<take<<" ";
                    number=number-take;
                    break;
                }
            }
            cout<<endl;
        }
    }
    return 0;
}
