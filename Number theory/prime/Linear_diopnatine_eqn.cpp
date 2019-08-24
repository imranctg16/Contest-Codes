///solve_linear_diopantine_equation with ext_gcd()
#include<bits/stdc++.h>
using namespace std;
int d,x,y,g;
int gcd(int a,int b)
{
    return b==0?a:gcd(b,a%b);
}
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
bool linear_diop(int A,int B,int C)
{
     g=gcd(A,B);
     cout<<"g= "<<g<<endl;
     if(C%g!=0)
    {
       return false ;
    }
    int a,b,c;
    a=A/g;b=B/g;c=C/g;
    ex_gcd(a,b);
    if ( g < 0 ) { //Make Sure gcd(a,b) = 1
        a *= -1; b *= -1; c *= -1;
    }
    x=x*c;
    y=y*c;
    return true;
}
int main()
{
    while(1)
{
    int a,b,c;
    cout<<"Enter the value of A,B,C\n";
    cin>>a>>b>>c;
    bool check;
    check=linear_diop(a,b,c);
    if(!check)
        cout<<"NO solution is possible\n";

    else
    {
       cout<<"possible solution is  "<<x<<" "<<y<<endl;

        int k = 1;
        int save=x + k * ( b / g );
        int save2=y - k * ( a / g );
        cout<<"before value= \n";
        cout<<save<<" "<<save2<<endl;
        while(save<0||save2<0)
        {
          k++;  //Use different value of k to get different solutions
         save=x + k * ( b / g );
         save2=y - k * ( a / g );
        }
        cout<<"The value of n is "<<k<<" \n";
        printf ("Another Possible Solution (%d %d)\n",save,save2);
    }
}
    return 0;
}
