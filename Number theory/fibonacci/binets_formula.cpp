///does not work for n>70

#include<bits/stdc++.h>
using namespace std;
int main()
{
	cout<<"press 0 to exit\n";
	int n,ans;
	while(1)
	{
	   double take=1.618,ans,save=pow(5,0.5),take2,take3;
	    cin>>n;
	    take=pow(take,n);
	    ans=take/save;
	    ans=round(ans);
		cout<<ans<<endl;
	}
	return 0;
}
