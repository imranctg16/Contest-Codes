#include<bits/stdc++.h>
using namespace std;

int val(char c)
{
    if (c >= '0' && c <= '9')
        return (int)c - '0';
    else
        return (int)c - 'A' + 10;
}

int convert(string str)
{

    cout<<"enter the base of the number\n";
    int base;
    cin>>base;
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



int main()
{
  while(1)
  {
   cout<<"Program for Base(any)to decimal conversion\n";

   string str;
   cin>>str;
   cout<<"decimal representation is ="<<convert(str)<<endl;

  }
   return 0;
}
