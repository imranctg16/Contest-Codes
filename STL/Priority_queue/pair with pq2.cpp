#include<bits/stdc++.h>
using namespace std;
pair<int,int>p;

struct comp
{
    bool operator()(pair<int,int> const& a, pair<int,int> const& b) const
    {
        return  a.first < b.first;
    }
};        /// Customized sort,,manee sort kun valuer upor depend korbe seta bole deya.



int main()
{

    priority_queue<pair<int,int>,vector<pair<int,int>>,comp >q;
    int n;
    cout<<"How many number\n";
    cin>>n;

    for(int i=0; i<n; i++)
    {
        cin>>p.first;
        cin>>p.second;
        q.push(p);
    }
    cout<<"Output\n";

    while(!q.empty())
    {
        p=q.top();

        cout<<p.first<<" "<<p.second<<" "<<endl;
        q.pop();
    }

    return 0;
}

/*
 Ekhane sorting ta kora hobe,, decreasing order e,,ebong eta hisab korbe first number ta dekhe

 jemon jodi input
 2
 1 2
 2 3
 deya hoi..

 output hobe

 2 3
 1 2

 so prothom number ta dekhe se decreasing order e sajabe,2nd number ta fact na,

 input:

 2
 5 3
 6 1
 output:
 6 1
 5 3
*/
