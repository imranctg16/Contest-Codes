#include<bits/stdc++.h>

using namespace std;


pair<int,int>p;


int main()
{

    priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>> >q;

    /// Priority holo just ekta normal queue,,kinto ichamoto sorted kore rakha jabe,graph er code e eta must lagbe
    int n;
    cout<<"How many number\n";
    cin>>n;
    for(int i=0; i<n; i++)
    {
        cin>>p.first;
        cin>>p.second;
        q.push(p);  /// queue te pair object dhukaitesi,tar mane bair korle pair object bair hobe,eta kheyal rakhte hobe
    }
    cout<<"Output\n";
    while(!q.empty())
    {
        p=q.top();  /// p holds the first pair object
        cout<<p.first<<" "<<p.second<<" "<<endl;
        q.pop();
    }

    return 0;
}
/*
 Ekhane sorting ta kora hobe,, increasing order e,,ebong eta hisab korbe first number ta dekhe

 jemon jodi input
 2
 2 3
 1 2
 deya hoi..

 output hobe

 1 2
 2 3
 so prothom number ta dekhe se increasing order e sajabe,2nd number ta fact na,

 input:

 2
 6 1
 5 3
 output:
 5 3
 6 1
*/
