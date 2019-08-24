#include<bits/stdc++.h>

using namespace std;

int main()
{
    int number,counter=0;

    cout<<"Enter a number to check how many 1 its got\n";

    cin>>number;

    while(number)
    {
        number=number&(number-1);

        counter++;
    }
    cout<<"ANS= "<<counter<<endl;
    return 0;
}
