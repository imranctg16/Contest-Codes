#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;

    cout<<"HOW many numbers\n";

    cin>>n;

    map<int,int>s;

    map<int,int>::iterator p;

    int number;
    for(int i=1;i<=n;i++)
    {

        cin>>number;
        s[number]++;
    }

    cout<<"so the numbers and their occurences is \n";

    for(p=s.begin(); p!=s.end(); p++)
    {


         cout<<p->first<<" = "<<p->second<<"\n";


    }


    return 0;
}
