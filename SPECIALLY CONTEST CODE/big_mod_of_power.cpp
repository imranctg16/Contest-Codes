///big mode of power(input is a^b,c)
#include<bits/stdc++.h>
using namespace std;
int modrecursion(int a,int b,int c)
{
    if(b==0)
        return 1;
    if(b==1)
        return a%c;
    else if(b%2==0)
    {
        return modrecursion((a*a)%c,b/2,c);
    }
    else
     return (a*modrecursion((a*a%c),b/2,c))%c;
}
int main()
{
    int a,b,c;
    cout<<"enter a ,b,c \n";
    cin>>a>>b>>c;
    cout<<"ans is = "<<modrecursion(a,b,c)<<"\n";
}
