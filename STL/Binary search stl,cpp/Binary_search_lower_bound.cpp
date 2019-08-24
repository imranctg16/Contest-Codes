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
    int take=lower_bound(vi.begin(),vi.end(),number)-vi.begin();
    cout<<take<<endl;
     take=upper_bound(vi.begin(),vi.end(),number)-vi.begin();
    cout<<take<<endl;
    if(binary_search(vi.begin(),vi.end(),number))
    {
        cout<<"the value exists\n";
    }
    else
        cout<<"not\n";
    return 0;
}
