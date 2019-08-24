#include<bits/stdc++.h>

using namespace std;

vector<pair<int,int> >v;
pair<int,int>p;

int main()
{
    int num1,num2,n;
    cout<<"HOw many number\n";
    cin>>n;

    for(int i=0;i<n;i++)
    {
        cin>>num1>>num2;
       // p.first=num1;
       // p.second=num2;
        v.push_back(make_pair(num1,num2));

    }
    cout<<"OUtput\n";

    for(int i=0;i<n;i++)
    {
        cout<<v[i].first;
        cout<<" ";
        cout<<v[i].second;
    }
    return 0;
}
