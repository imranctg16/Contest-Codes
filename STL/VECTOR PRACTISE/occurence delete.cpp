#include<bits/stdc++.h>

using namespace std;

int main()
{

    string x,y;
    cout<<"Enter the string\n";
    cin>>y;
    vector<char>m(200);
    int k=0;
    int f=0;
    char ch;
    for(int i=0;i<y.length();i++)
    {
        f=0;
        ch=y[i];
        for(int j=0;j<k;j++)
        {
            if(m[j]==ch)
            {
                f=1;
                break;
            }
        }
        if(f==0)
        {
            m[k]=ch;
            k++;
        }
    }
    for(int i=0;i<k;i++)
    {
        cout<<m[i];
    }
    return 0;

}
