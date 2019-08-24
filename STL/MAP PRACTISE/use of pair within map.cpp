#include<bits/stdc++.h>

using namespace std;


int main()
{

    int n,u,v;

    map<pair<int,int>,int >m;

    map<pair<int,int>,int >::iterator itr;

    pair<int,int> p;

    cout<<"HOW many edges\n";

    cin>>n;


    cout<<"ENTER THE NODEs\n";

    int E;

    for(int i=1;i<=n;i++)
    {

        cin>>u>>v;

        p.first=u;

        p.second=v;

        cout<<"Enter the weight\n";
        cin>>E;

        m[p]=E;
    }
    cout<<"THE GRAPHs\n";

    itr=m.begin();

    for(int i=1;i<=n;i++)
    {

        p=itr->first;

        cout<<"THE NODES ";

        cout<<p.first<<" "<<p.second;

        cout<<"\nTHE WEIGHT = "<<itr->second;




        itr++;
        cout<<endl;
    }

    return 0;
}
