#include<bits/stdc++.h>
using namespace std;
#include<vector>

/*
    Time Complexity: O(n*r)
    Space Complexity: O(r)
*/
long long C(int n, int r, int MOD)
{
    vector< vector<long long> > C(2,vector<long long> (r+1,0));

    for (int i=0; i<=n; i++)
    {
        for (int k=0; k<=r && k<=i; k++)
            if (k==0 || k==i)
                C[i&1][k] = 1;
            else
                C[i&1][k] = (C[(i-1)&1][k-1] + C[(i-1)&1][k])%MOD;
    }
    return C[n&1][r];
}

int main()
{
    int n,r,m,i,k;
    while (~scanf("%d%d%d",&n,&r,&m))
    {
        printf("%lld\n",C(n, r, m));
    }
}
