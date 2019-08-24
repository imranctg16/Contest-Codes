#include<bits/stdc++.h>
using namespace std;


int convert1(string str,int base)   /// from geekforce
{
    int len = str.size();
    int power = 1; // Initialize power of base
    int num = 0;  // Initialize result
    // Decimal equivalent is str[len-1]*1 +
    // str[len-1]*base + str[len-1]*(base^2) + ...
    for (int i = len - 1; i >= 0; i--)
    {
        // A digit in input number must be
        // less than number's base
        num += val(str[i]) * power;
        power = power * base;
    }
    return num;
}

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
