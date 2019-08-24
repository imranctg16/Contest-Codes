#include<bits/stdc++.h>

using namespace std;

int main()
{
    map<string,int>s;

    int n,number;

    cout<<"HOW many PEople\n";

    cin>>n;

    string x;

    cout<<"Enter their values\n";

    for(int i=1; i<=n; i++)
    {
        cin>>x;
        cin>>number;
        s[x]=number;
    }

    map<string,int>::iterator p;


    cout<<"\n";

    cout<<"KEYS WILL BE SORTED BUT THE VALUE WONT\n";



    for(p=s.begin(); p!=s.end(); p++)
    {

        cout<<p->first<<" = "<<p->second<<"\n";

    }
    return 0;
}
