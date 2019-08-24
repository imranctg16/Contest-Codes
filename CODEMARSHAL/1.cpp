#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long int t,a,maxx;
    cin>>t;
    while(t--)
    {
        maxx=0;
        for(int i=1;i<=3;i++)
        {
            cin>>a;
            if(i==1)
            {
                  maxx=a;
                continue;
            }
            maxx=max(maxx,a);
        }
        cout<<maxx<<endl;
    }
    return 0;
}
