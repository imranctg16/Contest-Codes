#include<bits/stdc++.h>
using namespace std;



int convert(string str)
{
    int res=0;
    int coef=1;
    cout<<"enter the base of the number\n";
    int base;
    cin>>base;
    int length=str.size();
    for(int i=length-1;i>=0;i--)
    {
        res+=(str[i]-'0')*coef;
        coef*=base;
    }
    return res;
}
int main()
{
   cout<<"Program for Base(any)to decimal conversion\n";
   string str;
   cin>>str;
   cout<<"decimal representation is ="<<convert(str)<<endl;
   return 0;
}
