///(version 2):faster_but_still_slow
#include<bits/stdc++.h>
using namespace std;
typedef int ll;
vector<ll>vi;
map<int,int>m;
map<int,int>::iterator it2;
map<int,vector<int> > index;

int n,t,number,save,save2,take,take2,ans;
long long int counter=0;
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
            //number=number%1000;
            vi.push_back(number);
            m[number]++;
            maxx=max(maxx,number);
        }
        sort(vi.begin(),vi.end());
        ll counter2=0;
        for(it2=m.begin(); it2!=m.end(); it2++)
        {
            take=it2->first;
            take2=it2->second;
            while(take2--)
            {
                index[take].push_back(counter2);
                counter2++;
            }
        }
//        cout<<"INDEX PRINTING:\n";
//        for(it=index.begin(); it!=index.end(); it++)
//        {
//            take=(it->first);
//            cout<<"FOR "<<take<<":\n";
//            for(int i=0; i<index[take].size(); i++)
//            {
//                cout<<index[take][i]<<" ";
//            }
//            cout<<endl;
//        }
        ll len=vi.size();
        for(int i=0; i<len; i++)
        {
            for(int j=i+1; j<len-1; j++)
            {
                take=vi[i];
                take2=vi[j];
                save=take+take2;
                // cout<<"take= "<<take<<" take2= "<<take2<<" and save= "<<save<<endl;
                for(int k=0; k<index[save].size(); k++)
                {
                    save2=index[save][k];
                    // cout<<"index of "<<save<<"= "<<save2<<" and j = "<<j<<endl;
                    if(save2>j)
                    {
                        counter++;
                    }
                }
            }
        }
        printf("Case %d: %lld\n",q,counter);
        vi.clear();
        m.clear();
        index.clear();
    }
    return 0;
}


/*
input:
10
5
2 4 6 8 10
4
5 2 3 7
9
1 3 3 5 2 4 6 6 6
10
1 3 3 3 5 2 4 6 6 6
5
0 1 1 2 0
6
0 0 1 1 2 0
5
1 1 2 2 3
6
1 1 2 2 3 4
5
0 0 0 0 0
6
0 1 0 1 0 2
*/

