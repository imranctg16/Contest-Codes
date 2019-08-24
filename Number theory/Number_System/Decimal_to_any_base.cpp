#include<bits/stdc++.h>
using namespace std;
char symbol[] = {'0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F'};

string convert(int x,int base)
{
    string str="";
    while(x!=0)
    {
        int r=x%base;
        str=str+symbol[r];
        x=x/base;
    }
    if(str.size()==0)
    {
        str=symbol[0];
    }
    reverse(str.begin(),str.end());
    return str;
}
int main()
{
    int number;
    while(1)
    {
        cout<<"enter a number in decimal\n";
        int number;
        cin>>number;
        cout<<"enter the base you wish to convert\n";
        int base;
        cin>>base;
        string str;
        str=convert(number,base);
        cout<<"Ans is "<<str<<endl;
    }
    return 0;
}
