#include<bits/stdc++.h>
using namespace std;

int main()
{


string str = "hello World";


    transform(str.begin()+1, str.end(),str.begin()+1, ::toupper);

    cout<<str;

    return 0;
}
