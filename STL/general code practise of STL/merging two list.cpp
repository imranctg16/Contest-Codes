 #include<bits/stdc++.h>


 using namespace std;

 int main()
 {
     int i,j,k,l;

     list<int>a,b;


     list<int>::iterator p;

    for(i=0;i<10;i++)
    {
        a.push_back(i);

    }

    for(i=1;i<12;i=i+2)
    {
        b.push_back(i);
    }


    p=a.begin();

     cout<<"\n\ncontents of the first list\n";

    while(p!=a.end())
    {
        cout<<*p;
        p++;
    }
    cout<<"\n\ncontents of the first list\n";
    p=b.begin();

    while(p!=b.end())
    {
        cout<<*p;
        p++;
    }

    a.merge(b);
    if(!b.empty())
    {
        printf("list is empty \n");

    }

    cout<<"\n\nSo the merged list\n";

     p=a.begin();

    while(p!=a.end())
    {
        cout<<*p<<" ";
        p++;
    }











     return 0;
 }
