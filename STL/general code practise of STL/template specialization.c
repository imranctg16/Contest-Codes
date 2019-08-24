#include<iostream>

using namespace std;



template<class t>

class boom{

public:

    boom(T x)
    {
        cout<<x<<endl;
    }

};

template<>
class boom<char>
{
   public:

    boom(T x)
    {
        cout<<x<<" is a character\n";
    }


};



int main()
{

     boom ob(7);




}
