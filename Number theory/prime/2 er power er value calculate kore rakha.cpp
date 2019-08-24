#include<bits/stdc++.h>
using namespace std;
typedef long long int LL;

LL f[35];
int main()
{
   LL number;
    f[0]=1;
    for(int i=1;i<=31;i++)
    {
        f[i]=(f[i-1]*2);
    }
    cout<<"Enter 0 to break\n";
    while(1)
    {
      cin>>number;
      if(!number)
            break;
      cout<<"So 2 to the power "<<number<<" is "<<f[number]<<endl;
    }
}
