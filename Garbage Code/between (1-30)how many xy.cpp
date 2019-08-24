#include<bits/stdc++.h>

using namespace std;

int main()
{

    long long int counter=0;
    for(int i=2;i<300;i++)
    {

           if(300%i==0)
           {
               counter++;
                cout<<"x= "<<i<<" and y= "<<300/i<<endl;
           }

    }
    cout<<"ans= "<<counter<<endl;

}
