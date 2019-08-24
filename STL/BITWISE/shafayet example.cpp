#include<bits/stdc++.h>
using namespace std;

int w[20][20];

int n;

int dp[(1<<15)+2];

int Set(int N,int pos)
{
    return N=N | (1<<pos);
}

int reset(int N,int pos)
{
    return N= N & ~(1<<pos);
}

bool check(int N,int pos)
{
    return (bool)(N & (1<<pos));
}

int call(int mask)
{
    cout<<"\nmask= "<<mask<<endl;

    if(mask==(1<<n)-1)
    {
        cout<<"excess::returned from mask "<<mask<<endl;
        return 0;
    }
    if(dp[mask]!=-1)
    {
        cout<<"dp::returned from mask "<<mask<<endl;
        return dp[mask];
    }
    int mn=1<<28;
    for(int i=0; i<n; i++)
    {
        if(check(mask,i)==0)
        {
            cout<<i<<" th bit is not set ";
             int price=w[i][i];
            cout<<"Original price of = "<<i<<" "<<i<<" = "<<price<<endl;
            for(int j=0; j<n; j++)
            {
                if(i!=j and check(mask,j)!=0)
                {
                    cout<<"i!=j where j= "<<j<<"and it is set so ,, "<<endl;
                    price+=w[i][j];
                    cout<<"price= "<<price<<endl;
                }
            }
            int ret=price+call(Set(mask,i));
            cout<<"mask = "<<mask<<" retuned ,ret is "<<ret<<endl;
            mn=min(mn,ret);
        }
    }
    return dp[mask]=mn;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    memset(dp,-1,sizeof(dp));
    cin>>n;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            scanf("%d",&w[i][j]);
        }
    }
    int ret=call(0);
    printf("\n%d\n",ret);
    return 0;
}
/*
test case:
  3
  10 10 20
  20 30 40
  10 20 10
*/
