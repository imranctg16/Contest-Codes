///sum of divisor of N loop method
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef vector<int> vi;
vector<int>divisor;
int sumnod(int n)
{
    int sum=0;
    int sqrtn=sqrt(n);
    for(int i=1; i<=sqrtn; i++)
    {
        if(n%i==0)
        {
            int take=i;
            int take2=n/i;

            if(take!=take2)
            {
                divisor.push_back(take);
                divisor.push_back(take2);
                sum+=take+take2;
            }
            else
            {
                divisor.push_back(take);
                sum+=take;
            }
        }
    }
    return sum;
}
int main()
{
    int n;
    cout<<"enter the number to find its total divisor\n";
    cin>>n;
    cout<<"Sum of the divisor is "<<sumnod(n)<<endl;
    cout<<"and the divisors are\n";
    for(int i=0; i<divisor.size(); i++)
    {
        cout<<divisor[i]<<" ";
    }
    cout<<endl;

    return 0;
}

