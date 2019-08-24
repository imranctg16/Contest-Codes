#include<bits/stdc++.h>
using namespace std;
int d,x,y;
void ex_gcd(int a,int b)
{

    if(b==0)
    {
        d=a;
        x=1;
        y=0;
    }
    else
    {
        ex_gcd(b,a%b);
        int temp=x;
        x=y;
        y=temp-(a/b)*y;
    }
}
int main()
{
    int a,b;
    cout<<"enter two number\n";
    cin>>a>>b;
    ex_gcd(a,b);
    cout<<"the gcd is = "<<d<<endl;
    cout<<"and the coefficients are "<<x<<" "<<y<<endl;
}
