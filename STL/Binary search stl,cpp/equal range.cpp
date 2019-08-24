#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,number;
    vector<int>vi;
    cout<<"Enter some Number\n";
    cin>>n;
    for(int i=0;i<n;i++)
    {
       cin>>number;
       vi.push_back(number);
    }
    cout<<"Binary search input= \n";
    cin>>number;

    auto it=equal_range(vi.begin(),vi.end(),number);

    cout<<*it.first<<" "<<*it.second<<endl;


    return 0;
}
