#include<iostream>
using namespace std;
template<class T>
class imran{
    T first ,second;
public:
    imran(T a,T b)
    {first=a;
        second=b;}
    T bigger();
};

template<class T>
T imran<T>::bigger()
{
    return(first<second?first:second);
}
int main()
{
    imran <double>ob(35.25,10.25);
    cout<<ob.bigger();
}
