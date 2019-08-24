#include<bits/stdc++.h>
using namespace std;
int main()
{

    int n;

    vector<int>vect(10,10);


    cout<<"size of the vector is-->"<<vect.size()<<endl<<endl;

    for(int i=0;i<10;i++)
    {
        //cout<<vect.at(i)<<" ";
           ///or
         //  vect.at(i)=rand()%20;

           cout<<vect[i]<<" ";
    }
    cout<<endl;

    vect.resize(15,66);

    cout<<"size of the vector is-->"<<vect.size()<<endl<<endl;

    for(int i=0;i<15;i++)
    {

           cout<<vect[i]<<" ";
    }
    cout<<endl;

    return 0;
}
