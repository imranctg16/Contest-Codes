#include<bits/stdc++.h>
using namespace std;
pair<int,int>p;
int main()
{

    priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>> >q;
    int n;
    cout<<"How many number\n";
    cin>>n;

    for(int i=0; i<n; i++)
    {
        cin>>p.first;
        cin>>p.second;
        q.push(p);
    }

    while(!q.empty())
    {
        p=q.top();

        cout<<p.first<<" "<<p.second<<" "<<endl;
        q.pop();
    }

    return 0;
}
