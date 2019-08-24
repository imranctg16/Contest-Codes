///simple binary search
#include<bits/stdc++.h>
using namespace std;
int save[20],n;
bool flag=0;
void binary()
{
    int number,mid;
    cout<<"what number do you wish to find?\n";
    cin>>number;
    int low,high;
    low=1;
    high=n;
    while(low<=high)
    {
        mid=(low+high)/2;
        if(save[mid]==number)
        {
            cout<<"found at "<<mid<<" index\n";
            flag=1;
            return;
        }
        if(save[mid]>number)
        {
            high=mid-1;
        }
        else if(save[mid]<number)
        {
            low=mid+1;
        }
    }
}
int main()
{
    cout<<"How many numbers?\n";
    cin>>n;
    for(int i=1; i<=n; i++)
    {
        cin>>save[i];
    }
    sort(save+1,save+n);
    for(int i=1; i<=n; i++)
    {
        cout<<save[i]<<" ";
    }
    cout<<endl;
    flag=0;
    binary();
    if(!flag)
    {
        cout<<"element not found!\n";
    }
    return 0;
}
