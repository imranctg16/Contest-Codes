#include<bits/stdc++.h>

using namespace std;

int main()
{


    map<string,int>m;

    map<string,int>::iterator itr;


    cout<<"HOW many numbers\n";

    int n,number;

    cin>>n;

    string x,y;

    for(int i=1; i<=n; i++)
    {

        cout<<"Enter the collegues name ";

        cin>>x;

        cout<<"ENTER HIS POSITION\n";

        cin>>number;

        m[x]=number+2;
    }

    cout<<"DISPLAYING THE VALUES\n\n\n";

    for(itr=m.begin(); itr!=m.end(); itr++)
    {

            cout<<"CLIENTS NAME\n";

            cout<<itr->first;
            cout<<"\n";

            cout<<"CLIENTS NUMBER\n";



            cout<<itr->second;

            cout<<"\n";





        }
            return 0;
        }
