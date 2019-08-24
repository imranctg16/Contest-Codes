#include<iostream>
#include<list>
using namespace std;
int main()
{
    int n,i;
    list<char>a;
    list<char>b;
    cout<<"how many characters"<<endl;
    cin>>n;
    for(i=0;i<n;i++)
    {
        a.push_back('A'+i);
    }
    list<char>::iterator p;

    while(!a.empty())
    {
        p=a.begin();
        cout<<*p;
        a.pop_front();
        b.push_front(*p);
        p++;
    }
    cout<<"\n\nbidirectional list\n\n";

    p=b.begin();
    while(p!=b.end())
    {
        cout<<*p;
        p++;
    }
    return 0;
}
