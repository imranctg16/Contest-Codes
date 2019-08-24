#include<bits/stdc++.h>
using namespace std;

int pi[100];
char p[100],t[100];

int prefix()
{
	int now;
	pi[0]=-1;
	now=-1;
	int len=strlen(p);
	cout<<"sub lenth= "<<len<<endl;

	for(int i=1;i<len;i++)
	{
		while(now!=-1&&p[now+1]!=p[i])
		{
			now=pi[now];
		}
		if(p[now+1]==p[i])
		{
			pi[i]=++now;
		}
		else
		{
				pi[i]=-1;
				now=-1;
		}
	}
}

int kmp()
{
	int now;
	now=-1;
	int n=strlen(t);
	int m=strlen(p);
	for(int i=0;i<n;i++)
	{
		while(now!=-1&&p[now+1]!=t[i])
		{
			now=pi[now];
		}
		if(p[now+1]==t[i])
		{
			++now;
		}
		else
		{
			now=-1;
		}
		if(now==m)
		{
			return 1;
		}
	}
	return 0;
}


int main()
{
	cout<<"enter the text\n";
	cin>>t;
	cout<<"enter the sub text\n";
	cin>>p;
	prefix();
	int save=kmp();
	cout<<"save= "<<save<<endl;



	return 0;
}
