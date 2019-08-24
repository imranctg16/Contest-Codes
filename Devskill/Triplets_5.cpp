///(version 1):correct BUT TLE

#include<iostream>
#include<cstdio>
#include<algorithm>
#include<vector>
#include<cstring>
using namespace std;
typedef int ll;
vector<ll>vi;
int m[5010]= {0};
int n,t,number,counter=1,save,save2,take,take2,ans;
int main()
{
    scanf("%d",&t);
    for(int q=1; q<=t; q++)
    {
        memset(m,0,sizeof m);
        counter=0;
        scanf("%d",&n);
        for(int i=0; i<n; i++)
        {
            scanf("%d",&number);
            //if(number!=0)
             //number=number%1000;
            m[number]++;
            vi.push_back(number);
        }
        sort(vi.begin(),vi.end());
        ll len=vi.size();
        ll maxx=vi[len-1];
        for(int i=0; i<len; i++)
        {
        	for(int j=i+1;j<len;j++)
			{
				take=vi[i];
				take2=vi[j];
				save=take+take2;
				if(save>maxx)
				{
					break;
				}
				if(m[save])
				{
					for(int k=j+1;k<len;k++)
					{
						if(vi[k]==save)
						{
							counter++;
							//cout<<take<<" + "<<take2<<" = "<<save<<endl;
						}
					}
				}
			}
        }
        printf("Case %d: %d\n",q,counter);
        vi.clear();
    }
    return 0;
}

