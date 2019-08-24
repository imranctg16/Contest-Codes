#include<bits/stdc++.h>
using namespace std;
int main()
{
    double ans;
    long long t;
    cin>>t;
    while(t--)
    {
        long long s;
        cin>>s;
        double m,ss=s*2.0;
        m=sqrt(1+4*ss);
        ans=(m-1)/2.0;
        cout<<floor(ans)<<endl;

[]
        if(floor(ans)==ans)
        {
            cout<<(long long)ans<<"\n0\n";
        }
        else
        {
            long long n=floor(ans);
            long long r=(n*(n+1))/2;
            cout<<n<<"\n"<<s-r<<"\n";
        }
    }
    return 0;
}
