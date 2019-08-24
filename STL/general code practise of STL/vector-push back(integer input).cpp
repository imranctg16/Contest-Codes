#include<bits/stdc++.h>

using namespace std;

int main()
{
    int take,i,j,n;
    vector<int>a;

    cout<<"how many input ?\n";

    cin>>n;
    for(int i=1;i<=n;i++)
    {
            cin>>take;

            a.push_back(take);

    }
    cout<<"diplaying the vector element\n";

    for(i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }

    int save=a.size();

    cout<<"\n\nthe size-->"<<save<<endl;

    cout<<"deleting the last value\n";

    a.pop_back();  ///deleting last element

    save=a.size();
    cout<<"after deleting the last value\n";

    for(i=0;i<save;i++)
    {
        cout<<a[i]<<" ";
    }

    cout<<"erasing first data\n";

    a.erase(a.begin());  ///deleting first element

    save=a.size();

    cout<<"after deleting the 1ST   value\n";

    for(i=0;i<save;i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<"\ndeleting a sequence";

    a.erase(a.begin()+2,a.begin()+5);

    save=a.size();


    for(i=0;i<save;i++)
    {
        cout<<a[i]<<" ";
    }



}
