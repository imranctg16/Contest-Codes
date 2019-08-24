#include<iostream>
using namespace std;
int main()
{
    int t,number;
    cin>>t;
    while(t--)
    {
       cin>>number;

       if(number>=120)
       {
           cout<<"Good Boy Sifat\n";
       }
       else
        cout<<"Naughty Boy Sifat\n";
    }
    return 0;
}
