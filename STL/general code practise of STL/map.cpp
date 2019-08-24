#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;


    map<int,string>mymap;


    map<int,string>::iterator p;
string
    mymap[0]="imran";
    mymap[3]="rakib";
    mymap[2]="julu";
    mymap[4]="shafee";

    p=mymap.begin();

    while(p!=mymap.end())
    {
        cout<<"MYmap["<<p->first<<"]="<<p->second<<endl;
        p++;
    }




}
