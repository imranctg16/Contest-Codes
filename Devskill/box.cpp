#include<bits/stdc++.h>
using namespace std;
int t,take,n;
double save,number;
int main()
{
    cin>>t;
    while(t--)
    {
        save=0.0;
        for(int i=1; i<=3; i++)
        {
            cin>>number;
            save=save+(number*number);
        }
        save=sqrt(save);
        cout.precision(3);
        printf("%.2f\n",save);
    }
    return 0;
}
