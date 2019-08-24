#include<bits/stdc++.h>

using namespace std;

int main()
{
    int number,arr[100];

    cout<<"How many number?\n";
    cin>>number;
    cout<<"enter the numbers\n";

    for(int i=0;i<number;i++)
    {
        cin>>arr[i];
    }

    cout<<"The possible subset";
    for(int i=0;i<1<<number;i++)
    {
          for(int j=0;j<number;j++)
          {

              if(i&(1<<j))
              {
                  cout<<arr[j]<<" ";
              }

          }
          cout<<endl;
    }
    return 0;
}
