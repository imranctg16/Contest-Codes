#include<bits/stdc++.h>
using namespace std;
///sum of number of divisor between range 1 to n

int Snod(int n)
{
    int sum=0;
    int u=sqrt(n);
    for(int i=1;i<=u;i++)
    {
        sum+=(n/i)-i;
    }
    sum*=2;
    sum+=u;
    return sum;
}
int main()
{
    int n;
    cout<<"N= ";
    cin>>n;
    cout<<"ans is = "<<Snod(n)<<endl;
    return 0;
}
