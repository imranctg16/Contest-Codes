#include<bits/stdc++.h>
using namespace std;

int  n,e;
map<int,vector<int> >adj;
map<int,map<int,int> >weight;
int main()
{
    cout<<"enter how many nodes\n";
    cin>>n;
    cout<<"enter how many edges\n";
    cin>>e;
    int a,b,w;
    for(int i=0;i<e;i++)
    {
       cout<<"Enter the two nodes"<<endl;
       cin>>a>>b;
       cout<<"enter the weights between them\n";
       cin>>w;
       adj[a].push_back(b);
       weight[a][b]=w;
       printf("weight %d %d = %d\n",a,b,w);
       adj[b].push_back(a);
       weight[b][a]=w;

       printf("weight %d %d = %d\n",b,a,w);
    }





    return 0;
}
