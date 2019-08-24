#include<bits/stdc++.h>

using namespace std;

int main()
{
    char c;
    vector<char>v;

    for(int i=0;i<5;i++)
    {

        cin>>c;
        v.push_back(c);
    }
    vector<char>::iterator p;

    p=v.begin();

    while(p!=v.end())
    {
        cout<<*p;
        p++;
    }
    cout<<"\n";





}
