#include<bits/stdc++.h>
using namespace std;
int main()
{
    int div,n,number,k;
    while(1)
    {
        cout<<"Enter a Number\n";
        cin>>number;
        cout<<"enter the value of k\n";
        cin>>k;
        div=(number/k);
        if((div*k)!=number)
        {
            number=(div+1)*k;
        }
        cout<<number<<endl;

    }
    return 0;
}

/*
   for greater then n
    (n+k)-(n%k);
*/
