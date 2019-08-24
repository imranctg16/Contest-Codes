#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef vector<int> vi;
vector<int>divisor;
int nod(int n)
{
    int counter=0;
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
                counter=counter+2;
            }
            else
            {
                counter++;
                divisor.push_back(take);
            }
        }
    }
    return counter;
}

int main()
{
    int n;
    cout<<"enter the number to find its total divisor\n";
    cin>>n;
    cout<<"ans is "<<nod(n)<<endl;
    cout<<"and the divisors are\n";
    for(int i=0; i<divisor.size(); i++)
    {
        cout<<divisor[i]<<" ";
    }
    cout<<endl;

    return 0;
}
