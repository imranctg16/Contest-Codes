#include<bits/stdc++.h>

using namespace std;

priority_queue<int,vector<int>,greater<int> >q;

int main()
{
    int n,number;
    cout<<"HOW many number?\n";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>number;
        q.push(number);
    }
    cout<<"values are= \n";
    while(!q.empty())
    {
        int u=q.top();
        cout<<u<<" ";
        q.pop();

    }
}
