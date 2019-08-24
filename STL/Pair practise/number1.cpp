#include<bits/stdc++.h>
using namespace std;
vector<pair<int,int> >v;   /// Created a vector which will contain only pair object
pair<int,int>p; /// created a pair object named p

int main()
{
    int num1,num2,n;
    cout<<"HOw many number\n";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>num1>>num2;
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
