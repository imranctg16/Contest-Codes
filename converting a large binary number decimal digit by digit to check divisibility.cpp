#include<bits/stdc++.h>
using namespace std;
int main()
{
    char a;
    int b;
    const int take=131071;
    while(cin>>a)
    {

       b=a-'0';
       while(cin>>a)
       {
           if(a=='#')
           {
               break;
           }
           b=(b*2)+(a-'0');
           b=b%take;
       }
       if(b){

          cout<<"NOT divisible\n";
       }
       else
       {
           cout<<"DIVISIBLE\n";
       }
    }
    return 0;
}

