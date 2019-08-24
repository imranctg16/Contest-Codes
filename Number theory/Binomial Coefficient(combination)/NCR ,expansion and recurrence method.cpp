/// C(n,k)=1, when k=0
	   ///=(n/k)*C(n-1,k-1) otherwise
#include<bits/stdc++.h>
using namespace std;
long long C(int n, int r)
{
    if (r==0) return 1;
    else return C(n-1,r-1) * n / r;
}
int main()
{
    int n,r,m;
    while (~scanf("%d%d",&n,&r))
    {
        printf("%lld\n",C(n, min(r,n-r)));
    }
}
