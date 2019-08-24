#include<iostream>
#include<cstdio>
#include<algorithm>
#include<set>
#include<map>
#include<vector>
using namespace std;
typedef int ll;
vector<ll>vi;
map<int,ll>m,m2;
map<ll,map<ll,ll> >check;
int n,t,number,counter=1,save,save2,take,take2,ans;
int main()
{
    scanf("%d",&t);
    for(int q=1; q<=t; q++)
    {
        counter=0;
        scanf("%d",&n);
        for(int i=0; i<n; i++)
        {
            scanf("%d",&number);
            if(number!=0)
                m[number]=1;
            vi.push_back(number);
        }
        sort(vi.begin(),vi.end());
        ll len=vi.size();
        ll maxx=vi[len-1];
        for(int i=0; i<len; i++)
        {
            take=vi[i];
            if(take>maxx/2)
            {
                break;
            }
            for(int j=i+1;; j++)
            {
                take2=vi[j];
                save=take+take2;
                if(save>maxx)
                {
                    break;
                }
                if(m[save]&&check[take][take2]==0)
                {
                    counter++;
                    cout<<take<<" + "<<take2<<" = "<<save<<endl;
                    check[take][take2]=save;
                    check[take2][take]=save;
                }
            }
        }
        printf("Case %d: %d\n",q,counter);
        m.clear();
        check.clear();
        vi.clear();
    }
    return 0;
}
