///Nqueen row based
///i changed the code from cp3,,they mixed up row and column variable,,it was getting difficult for me
#include<bits/stdc++.h>
using namespace std;
int save[20],n;
bool flag=false;
bool place(int r,int c)
{
    int column;
    for(int row=1; row<r; row++)
    {
        column=save[row];
        /// here i is the row and column=save[row];
        //cout<<"column= "<<column<<"and c= "<<c<<endl;
        //cout<<"abs(row-r)= "<<abs(row-r)<<" and abs(column-c)= "<<abs(column-c)<<endl;
        if(column==c)
        {
            return false;
        }
        if(abs(row-r)==abs(column-c))
        {
            return false;
        }
    }
    return true;
}
void hold(int r)
{
    //cout<<"value of r is= "<<r<<endl;
    if(r>n)
    {
        cout<<"you can place the queen in following order\n";
        for(int i=1;i<=n;i++)
        {
            cout<<"row= "<<i<<" \tcolumn= "<<save[i]<<endl;
        }
        return;
    }
    else
    {
        for(int i=1; i<=n; i++)
        {
            if(place(r,i))
            {
                int take=r;
                save[r]=i;
                hold(++take);  //to use a temp variable for r important or hold(r+1) will be good.
                save[r]=0  /// Unless you are not planning to printe the whole array,,ei line dorkar nai
            }
        }
    }
}
int main()
{
    memset(save,0,sizeof(save));
    cout<<"how many queen?\n";
    cin>>n;
    hold(1);
    cout<<"Bazinga!\n";
    return(0);
}
