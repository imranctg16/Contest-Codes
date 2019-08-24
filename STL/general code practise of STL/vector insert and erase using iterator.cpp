#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,a;
    vector<int>v;
    cout<<"how many elements?\n";
    cin>>n;
    for(int i=0; i<n; i++)
    {
        cin>>a;
        v.push_back(a);
    }

    vector<int>::iterator p;

    p=v.begin();

    cout<<"primary data\n";

    for(int j=0; j<v.size(); j++)
    {
        cout<<*p<<" ";
        p++;
    }
    p=v.begin()+2;

    v.insert(p,5,2);

    cout<<"\nafter insertion---->>>>>>>>\n\n";
    p=v.begin();


    for(int j=0; j<v.size(); j++)
    {
        cout<<*p<<" ";
        p++;
    }

    cout<<"\nafter deletion---->>>>>>>>\n\n";
    p=v.begin();
    p=p+2;
    v.erase(p,p+5);

     p=v.begin();


    for(int j=0; j<v.size(); j++)
    {
        cout<<*p<<" ";
        p++;
    }





}
