#include<bits/stdc++.h>

using namespace std;
int main()
{

    int n,number;

    vector<int>arr;

    cout<<"How many numbers?\n";

    cin>>n;



    for(int i=0;i<n;i++)
    {

            arr.push_back(rand());
            cout<<arr.at(i)<<" ";

    }

    cout<<endl;
    int save;

    arr.pop_back();



    for(int i=0;i<arr.size();i++)
    {

           cout<<arr.at(i)<<" ";


    }

    return 0;
}
