#include<bits/stdc++.h>

using namespace std;

int dp[(1<<15)+2];
int w[20][20];

int N;

int Set(int N,int pos)   /// bit set korar
{
    return N=N | (1<<pos);
}
int reset(int N,int pos)  /// bit reset korar
{
    return N= N & ~(1<<pos);
}

bool check(int N,int pos) /// bit check korar
{
    return (bool)(N & (1<<pos));
}


int call(int mask)
{

    if(mask==(1<<N)-1)
    {
        return 0;
    }
    if(dp[mask]!=-1)
    {
        return dp[mask];
    }
    int minn=INT_MAX;

    for(int i=0;i<N;i++)
    {
        if(check(mask,i)==0)
        {
            int price=w[i][i];
            for(int j=0;j<=N;j++)
            {
                if(i!=j&&check(mask,j)==1)
                {
                  price+=w[i][j];
                }
            }
            int ret=price+call(Set(mask,i));
             cout<<"ret value in loop= "<<ret<<endl;
            minn=min(minn,ret);

        }
    }
    cout<<"minn value = "<<minn<<" mask value= "<<mask<<endl;
    return dp[mask]=minn;
}

int main()
{
    cin>>N;
    memset(dp,-1,sizeof(dp));
    for(int i=0;i<N;i++)
    {
        for(int j=0;j<N;j++)
        {
            cin>>w[i][j];
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
