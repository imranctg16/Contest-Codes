#include<bits/stdc++.h>
using namespace std;
#define pb push_back
#define p pop_back
typedef long long int ll;
typedef vector<int>vi;
map<int,int>m;

int main()
{
     int t,number,n,ans;
     cin>>t;
     vi v;
     while(t--)
	 {
	 	cin>>n;
	 	for(int i=1;i<=n;i++)
		{
			cin>>number;
			v.pb(number);
			m[number]++;
		}
	 	sort(v.begin(),v.end());
		ans=0;
		for(int i=0;i<v.size();i++)
		{
			int take=v[i]*2;
			if(m[take]>0)
			{
				ans++;
			}
		}
		cout<<ans<<endl;
		v.clear();
		m.clear();
	 }
	return 0;
}

