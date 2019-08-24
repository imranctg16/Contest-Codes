#include<iostream>
#include<cstdio>
#include<algorithm>
#include<set>
#include<map>
#include<vector>
using namespace std;
typedef int ll;
vector<ll>vi;
map<int,ll>m;
int n,t,number,counter=1,save,save2,take,take2,ans;
// cout<<"Case "<<counter++<<": ";
//scanf("%lld",&);
//printf("%d\n",);
int main()
{
    //while(1){
    scanf("%lld",&t);
    for(int q=1; q<=t; q++)
    {
        counter=0;
        scanf("%lld",&n);
        for(int i=1; i<=n; i++)
        {
            scanf("%lld",&number);
            vi.push_back(number);
            m[number]=1;
        }
        sort(vi.begin(),vi.end());
        ll len=vi.size()-1;
        ll maxx=vi[len];
        //cout<<"maxx= "<<maxx<<endl;
        for(int i=0; i<len; i++)
        {
            take=vi[i];
            take2=vi[i+1];
            save=take+take2;
            save2=i+1;
            if(save<=maxx)
            {
                while(take2<=maxx)
                {
                    save=take+take2;
                    if(m[save])
                    {
                        while(save<=maxx&&m[save])
                        {
                            counter++;
                            cout<<take<<" + "<<take2<<" = "<<save<<endl;
                            take2=save;
                            save=take+take2;
                        }
                    }
                    else
                    {
                        save2++;
                        take2=vi[save2];
                    }
                }
            }
            //cout<<"run\n";
        }
        printf("Case %d: %d\n",q,counter);
        m.clear();
        vi.clear();
    }
    //}
    return 0;
}



