#include<iostream>


using namespace std;


template<class T,class U>

U add(T a,U b)

{
    return (a+b);
}

int main()
{
    cout<<"enter two number(integer and double)\n";

    int a;
    double b,c;

    cin>>a>>b;


    c=add(a,b);
    cout<<c;

}
