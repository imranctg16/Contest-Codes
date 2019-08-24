#include<iostream>
#include<cstdio>
#include<vector>
#include<algorithm>
using namespace std;
typedef long long int ll;
vector<char>vi;
ll n,t,number,counter=1,save,save2,take,take2,ans;
string x;
int main()
{
    //while(1){
    cin>>t;
    //freopen("frindly.txt","w+",stdout);
    while(t--)
    {
        cin>>number;
        cin.ignore();
        getline(cin,x);
        transform(x.begin(),x.end(),x.begin(),::tolower);
        //cout<<"x= "<<x<<endl;
        ll counter2=0;
        bool flag=false;
        char ch;
        for(ll i=0; i<x.size()&&counter2<number; i++)
        {
            ch=x[i];
            if((ch>='a'&&ch<='z')||(ch>='0'&&ch<='9'))
            {
                vi.push_back(x[i]);
                flag=true;
                counter2++;
            }
            else if(flag)
            {
                vi.push_back('-');
                counter2++;
                flag=false;
            }
        }
        ///output
        for(ll i=0; i<vi.size(); i++)
        {
            if(i<vi.size()-1)
                cout<<vi[i];
            else
            {
                if(vi[i]!='-')
                {
                    cout<<vi[i];
                }
            }
        }
        cout<<endl;
        vi.clear();
    }
    //}
    return 0;
}




