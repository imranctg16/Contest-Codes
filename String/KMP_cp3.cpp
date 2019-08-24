#include<bits/stdc++.h>
using namespace std;
#define max 1000
char t[max],p[max];
int b[max],n,m;
void preprocess()
{
	int i=0,j=-1;
	b[0]=-1;
	while(i<m)
	{
		while(j>=0&&p[i]!=p[j])
		{
			j=b[j];
		}
		i++;
		j++;
		b[i]=j;
	}
}

void kmp()
{
	int i=0,j=0;
	bool flag=false;
	while(i<n)
	{
		while(j>=0&&t[i]!=p[j])
		{
			j=b[j];
		}
		i++;
		j++;
		if(j==m)
		{
			flag=true;
			cout<<"pattern matched at "<<i-j<<" index\n";
			j=b[j];
		}
	}
	if(!flag)
	{
		cout<<"didnt find match!\n";
	}
}

int main()
{
	while(1)     /// infinite loop,, use ctr+c to exit
	{
	memset(t,0,sizeof(t));
	memset(p,0,sizeof(p));
	cout<<"Enter the total string\n";
	cin>>t;
	n=strlen(t);
	cout<<"Enter the substring string\n";
	cin>>p;
	m=strlen(p);
	preprocess();
	kmp();
	}
	return 0;
}
