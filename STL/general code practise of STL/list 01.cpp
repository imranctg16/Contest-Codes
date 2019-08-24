#include<bits/stdc++.h>


using namespace std;

int main()
{
    int n;

    cout<<"how many number\n";

    cin>>n;

    list<char>lst;

    for(int i=0;i<n;i++)
    {
        lst.push_back('A'+i);
    }

    list<char>::iterator p;

    p=lst.begin();

    while(p!=lst.end())
    {
        cout<<*p<<" ";

        p++;
    }






}
