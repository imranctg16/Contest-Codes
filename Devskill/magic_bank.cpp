#include <iostream>
using namespace std;
int main() {
	long long int t,number;
	cin>>t;
	while(t--)
	{
		cin>>number;
        long long int take=1,ans=0;
        for(int i=1;i<=10000;i++)
        {
            ans=ans+take;
            if(ans>=number)
            {
                    cout<<i<<endl;
                    break;
            }
            take++;
        }
	}
	return 0;
}
