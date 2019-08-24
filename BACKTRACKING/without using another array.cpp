/// this is a partial backtracking,,it does not create the whole part,rather it creates one cycle only
/// useful in uva 624(CD)
#include<bits/stdc++.h>
using namespace std;
int n,save[20];
vector<int>v;
void backtrack(int checker)
{
   // cout<<"checker= "<<checker<<endl;

    if(v.size()==n)
    {
        for(int i=0; i<n; i++)
        {
            cout<<v[i]<<" ";
        }
        return;
    }
    for(int i=checker; i<n; i++)
    {
        cout<<"number= "<<save[i]<<endl;
        v.push_back(save[i]);
        backtrack(i+1);
        v.pop_back();
    }

}


int main()
{
    cout<<"How many number\n";
    cin>>n;
    for(int i=0; i<n; i++)
    {
        cin>>save[i];
    }
    backtrack(0);
    return 0;
}
