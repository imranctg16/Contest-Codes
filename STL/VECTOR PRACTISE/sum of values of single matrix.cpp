#include<bits/stdc++.h>

using namespace std;

int main()
{
    vector<int>m;

    int number;

    cout<<"How many numbers\n";

    cin>>number;

    int number2;

    for(int i=0;i<number;i++)
    {
        cin>>number2;

        m.push_back(number2);
    }
    for(int i=0;i<m.size();i++)
    {
            cout<<m[i]<<" ";
    }
    return 0;
}
