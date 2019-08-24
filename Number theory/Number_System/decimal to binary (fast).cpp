#include<bits/stdc++.h>
using namespace std;
vector<int>vi;

void ConvertToBinary(int n) /*Alex says: Good to use unsigned int if u can*/
{
    if (n / 2 != 0)
    {
        ConvertToBinary(n / 2);
    }
	vi.push_back(n%2);
   // printf("%d", n % 2);
}
int main()
{
    while(1)
    {
        int number;
        cout<<"Enter a decimal number\n";
        cin>>number;
        ConvertToBinary(number);
        for(int i=0; i<vi.size(); i++)
        {
            cout<<vi[i];
        }
        cout<<endl;
		vi.clear();
    }
    return 0;
}
