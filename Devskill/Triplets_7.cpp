///(version:3):very_fast_but_wa
#include<iostream>
#include<cstdio>
#include<vector>
#include<cstring>
#include<algorithm>
#include<map>
using namespace std;
vector<int>vi;
int q,number,n,save,save2,take,take2;
long long int counter;
int m[1505]= {0},m2[1505]= {0};
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
            //number=number%1000;
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
                //cout<<"\ti= "<<j+1<<" j= "<<k+1<<endl;
                //cout<<take<<" + "<<take2<<" = "<<save<<endl;
                //cout<<"m [save]= "<<m[save]<<endl;
                // getchar();
                if(m[save]>0)
                {
                    if(save>take2)
                    {
                        counter+=m2[save];
                        // cout<<"up-counter= "<<counter<<endl<<endl;
                    }
                    else
                    {
                        counter+=m[save]-(k+1);
                        //cout<<"down-counter= "<<counter<<endl<<endl;
                    }
                }
            }
        }
        printf("Case %d: %lld\n",i,counter);
        vi.clear();
        //m.clear();
        //m2.clear();
    }
    return 0;
}
