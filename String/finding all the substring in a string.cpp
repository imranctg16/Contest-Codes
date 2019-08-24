#include<bits/stdc++.h>
using namespace std;
int main()
{
	vector<int>v;
	string str,sub;
	str="am i am very good,very good i am..not particular i am ,,but thanks am !";
	sub="am";
	int check=0;
	check=str.find(sub,0);
	if(check!=-1)
		v.push_back(check);
	while(check!=-1)
	{
		check=str.find(sub,check+1);
		if(check!=-1)
			v.push_back(check);

	}
	cout<<"the substring is found at position-->\n";
	for(int i=0;i<v.size();i++)
	{
		cout<<v[i]<<" ";
	}
	cout<<endl;
	return 0;
}
