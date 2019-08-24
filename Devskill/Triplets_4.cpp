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
map<int,ll>::iterator it,it2;
int n,t,number,counter=1,save,save2,take,take2,ans;
int main()
{
    scanf("%d",&t);
    for(int q=1; q<=t; q++)
    {
        counter=0;
        scanf("%d",&n);
        ll maxx=0;
        for(int i=0; i<n; i++)
        {
            scanf("%d",&number);
            if(number!=0)
                m[number]++;
            maxx=max(maxx,number);
        }
        ll temp,counter2;
        for(int i=1; i<=maxx; i++)
        {
            if(m[i])
            {
                for(int j=i; j<=maxx; j++)
                {
                    if(m[j])
                    {

                        temp=m[i]-1;
                        if(temp==0&&(i==j))
                        {
                            continue;
                        }
                        else
                        {
                            counter2=1;
                            for(int k=temp; k>0; k--)
                            {
                                counter2*=k;
                            }
                            cout<<"counter2 value= "<<counter2<<endl;
                            if(m[i+j])
                            {
                                cout<<"two values are= "<<i<<" "<<j<<endl;
                                //cout<<"and their map values are= "<<m[i]<<" "<<m[j]<<endl;
                                counter+=(counter2*m[i+j]);
                                 cout<<"counter value= "<<counter<<endl;
                            }
                        }
                    }
                }
            }
        }
        printf("Case %d: %d\n",q,counter);
        m.clear();
        vi.clear();
    }
    return 0;
}

