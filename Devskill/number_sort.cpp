#include<bits/stdc++.h>
using namespace std;
vector<double>vi;
int take,take2,n,t,q;
vector<double>vi;
vector<string>vi2;
double number;
int main()
{
    cin>>t;
    while(t--)
    {
        cin>>n;
        counter=0;
        for(int i=0; i<n; i++)
        {
            cin>>number;
            vi.push_back(number);
            m[counter++]=
            m[number]=1;
        }
        for(int i=0;i<vi.size();i++)
		{
			if(i<vi.size()-1)
			{
				cout<<",";
			}
			else
			{
				cout<<"\n";
			}
		}

    }
    return 0;
}
