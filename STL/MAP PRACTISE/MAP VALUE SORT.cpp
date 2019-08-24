#include<bits/stdc++.h>

using namespace std;


bool cond(pair<int,int> a, pair<int,int> b) {
    if(a.second<b.second) return true;
    if(a.second==b.second && a.first<b.first) return true;
    return false;
}

//main function

int main()
{
    int n;
    cout<<"HOW many numbers\n";

    cin>>n;

    map<int,int> M;

    for(int i=0;i<n;i++)
    {
        cin>>M[i];

    }

    vector<pair<int,int> > V(M.begin(),M.end());

    sort(V.begin(),V.end(),cond);

    cout<<"sorted value\n";

    for(int i=0;i<V.size();i++)
    {

        cout<<V[i].first<<" "<<V[i].second<<" "<<endl;

    }


return 0;

}

