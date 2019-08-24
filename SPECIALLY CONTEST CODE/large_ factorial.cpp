///large factorial
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[500],size=1;
    int n;
    cin>>n;
    a[0]=1;
    int carry=0;
    for(int i=n;i>=2;i--)
    {
            for(int j=0;j<size;j++)
            {
                carry=a[j]*i+carry;
                a[j]=carry%10;
                carry=carry/10;
            }
            while(carry>0)
            {
              a[size]=carry%10;
              size++;
              carry=carry/10;
            }
    }
    for(int i=size-1;i>=0;i--)
    {
        cout<<a[i];
    }
    return 0;
}
