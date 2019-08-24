#include<bits/stdc++.h>

using namespace std;


int main()
{

    int n;
    map<char,int>m;

    cout<<"how many data\n";

    cin>>n;


    for(int i=0;i<n;i++)
    {

        m.insert(pair<char,int>('A'+i,65+i));

    }

    cout<<"write the character to find out its ascii value\n";
    char ch;
    cin>>ch;

    map<char,int>::iterator p;

    p=m.find(ch);

    if(p!=m.end())
    {
        cout<<"the ascii value is-->"<<p->second<<endl;

    }
    else
        cout<<"character not found in the map\n";


}
