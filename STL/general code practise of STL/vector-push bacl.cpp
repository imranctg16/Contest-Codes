#include<bits/stdc++.h>

using namespace std;

int main()
{
    int take,i,j,n;
    vector<int>a;

    cout<<"how many input ?\n";

    cin>>n;
    for(int i=1;i<=n;i++)
    {
            cin>>take;

            a.push_back(take);

    }
    cout<<"diplaying the vector element\n";

    for(i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }



}
