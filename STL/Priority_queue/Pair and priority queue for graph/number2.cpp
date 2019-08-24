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
        p.first=num1;
        p.second=num2;
        v.push_back(p);

    }
    cout<<"OUtput\n";

    for(int i=0;i<n;i++)
    {
        cout<<v[i].first;        /// v[i] te thakbe vector er i number pair object, ekhon proti ta pair object e
                                  /// jehetu 2 ta number thake,oigula access er jonne "dot operator and first/second"
        cout<<" ";                 /// lage.
        cout<<v[i].second;
        cout<<" ";
    }
    return 0;
}
