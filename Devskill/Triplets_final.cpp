
///(version:3):very_fast_but_wa
#include<iostream>
#include<cstdio>
#include<vector>
#include<cstring>
#include<algorithm>
#include<map>
using namespace std;
vector<int>vi;
int q,number,n,save,save2,take,take2,counter;
int m[6005]= {0},m2[6005]= {0};
//map<int,int>m,m2;
int main()
{
    cin>>q;
    for(int i=1; i<=q; i++)
    {
        memset(m,0,sizeof m);
        memset(m2,0,sizeof m2);
        counter=0;
        cin>>n;
        int maxx=0;
        for(int k=0; k<n; k++)
        {
            cin>>number;
            vi.push_back(number);
            maxx=max(maxx,number);
        }
        sort(vi.begin(),vi.end());
        int counter2=0;
        for(int j=0; j<vi.size(); j++)
        {
            number=vi[j];
            m2[number]++;
            m[number]=++counter2;
        }
        int len=vi.size();
        for(int j=0; j<len-2; j++)
        {
            for(int k=j+1; k<len-1; k++)
            {
                take=vi[j];
                take2=vi[k];
                save=take+take2;
                if(m[save]>0)
                {
                    if(save>take2)
                    {
                        counter+=m2[save];

                    }
                    else
                    {
                        counter+=m[save]-(k+1);

                    }
                }
            }
        }
        printf("Case %d: %d\n",i,counter);
        vi.clear();
    }
    return 0;
}
