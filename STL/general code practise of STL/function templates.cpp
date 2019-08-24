#include<iostream>
using namespace std;
template <class imran>

imran add(imran a,imran b)
{
    imran c;
    c=a+b;

    cout<<c;
}
int main()
{

    double a,b;

    cout<<"please insert two number\n";

    cin>>a>>b;

    add(a,b);

    return 0;
}
