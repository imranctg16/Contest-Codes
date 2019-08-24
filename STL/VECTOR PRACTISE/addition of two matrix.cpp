#include<bits/stdc++.h>

using namespace std;

int main()
{

    vector<vector<int> >a(10,vector<int>(10,0));
    vector<vector<int> >b(10,vector<int>(10,0));
    vector<vector<int> >c(10,vector<int>(10,0));

    int r,col;

    cout<<"ENter the row and column of 1st Matrix\n";


    cin>>r>>col;

    cin.ignore();

    for(int i=0;i<r;i++)
    {
        for(int j=0;j<col;j++)
        {
               cin>>a[i][j];
               cout<<a[i][j]<<"  ";

        }

        cout<<"\n";
    }



    cout<<"ENter the row and column of 2nd Matrix\n";



    cin>>r>>col;

    for(int i=0;i<r;i++)
    {
        for(int j=0;j<col;j++)
        {

               cin>>b[i][j];
               cout<<b[i][j]<<"  ";


        }
        cout<<"\n";
    }

    cout<<"The summation of two matrix is\n";

    for(int i=0;i<r;i++)
    {

        for(int j=0;j<col;j++)
        {

        cout<<a[i][j]+b[i][j]<<"  ";


        }
        cout<<"\n";


    }



    return 0;
}
