#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
//vector<ll>vi;
//map<int,ll>m;
//set<ll>s1,s2;
map<ll,map<ll,ll> >weight;
map<ll,vector<ll> >adj;
map<ll,ll>check;
ll n,number,counter=1,save,save2,n1,n2,w,take,take2,input,ans=0,v,e;
// cout<<"Case "<<counter++<<": ";

void dfs_visit(ll source,ll min_value)
{
    //cout<<"Source = "<<source<<endl;
    check[source]=1;
    for(int i=0; i<adj[source].size(); i++)
    {
       int children=adj[source][i];
       //cout<<"children = "<<children<<" value = "<<weight[source][children]<<endl;
       if(!check[children] && weight[source][children]>=min_value)
        {
            check[adj[source][i]]=1;
            ans++;
            //cout<<ans<<endl;
            dfs_visit(adj[source][i],min_value);
        }

    }
}

int main()
{
    //freopen("output.txt","w",stdout);
    scanf("%lld",&n);
   // cout<<n<<endl;
    //cin>>n;
    ll q;
    while(n)
    {
        scanf("%lld%lld",&v,&e);
        //cin>>v>>e;
        for(int i=1; i<=e; i++)
        {
            //cin>>n1>>n2>>w;
            scanf("%lld%lld%lld",&n1,&n2,&w);
            //cout<<n1<<n2<<w<<endl;
            adj[n1].push_back(n2);
            adj[n2].push_back(n1);
            weight[n1][n2]=w;
            weight[n2][n1]=w;
//            cout<<"weight = "<<weight[n1][n2]<<endl;
        }
        scanf("%lld",&q);
        //cin>>q;
        printf("Case %lld:\n",counter++);
        for(int j=1; j<=q; j++)
        {
            scanf("%lld",&input);
            //cin>>input;
            ans=0;
            dfs_visit(1,input);
            //cout<<"Case "<<counter++<<": "<<ans<<endl;
            printf("%lld\n",ans);
            check.clear();
        }
        adj.clear();
        weight.clear();
        n--;
    }
    return 0;
}
