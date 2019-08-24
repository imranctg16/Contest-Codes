#include<iostream>

using namespace std;



template<class t>

class boom{

    public:

    boom(t x)
    {
        cout<<x<<endl;
    }

};

template<>
class boom<char>
{
   public:

    boom(char x)
    {
        cout<<x<<" is a character\n";
    }


};



int main()
{

     boom<int> ob(7);
     boom<double> ob1(8.5);
     boom<char> ob2 ('c');

}
