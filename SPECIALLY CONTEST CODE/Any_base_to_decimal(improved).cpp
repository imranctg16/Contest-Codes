///Any base to decimal
#include<bits/stdc++.h>
using namespace std;
int convert(string str)
{
    int res=0;
    cout<<"enter the base of the number\n";
    int base;
    cin>>base;
    int length=str.size();
    for(int i=0;i<length;i++)
    {
        res=(res*base)+(str[i]-'0');
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

