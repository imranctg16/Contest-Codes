#include<bits/stdc++.h>
using namespace std;

long long C(int n, int r)
{
    long long f[n + 1];
    f[0]=1;
    for (int i=1;i<=n;i++)
        f[i]=i*f[i-1];
    return f[n]/f[r]/f[n-r];
}

int main()
{
    int n,r,m;
    while (~scanf("%d%d",&n,&r))
    {
        printf("%lld\n",C(n, min(r,n-r))); /// because nCr = n C (n-r)
    }
}
