#include<bits/stdc++.h>

using namespace std;

int main()
{

    int n;

    cout<<"How many number\n";

    cin>>n;

    vector<int>no1;

    for(int i=0;i<n;i++)
    {

        no1.push_back(rand()%10);

        cout<<no1.at(i)<<" ";
    }


    cout<<endl;

    cout<<"How many number for the second vector\n";

    cin>>n;

    vector<int>no2;

    for(int i=0;i<n;i++)
    {

        no2.push_back(rand()%5);

        cout<<no2.at(i)<<" ";
    }
    cout<<endl<<endl;

    cout<<"Inserting some value of vector 2 to vector1\n";

    no1.insert(no1.begin()+2,no2.begin()+2,no2.begin()+5);

    no2.erase(no2.begin()+2,no2.begin()+5);



    cout<<"\nSo now the vector 1 is\n";



    for(int i=0;i<no1.size();i++)
    {

        cout<<no1.at(i)<<" ";

    }

    cout<<"\n\n";



    cout<<"So now the vector 2 is\n";

    for(int i=0;i<no2.size();i++)
    {

        cout<<no2.at(i)<<" ";

    }


    return 0;
}
