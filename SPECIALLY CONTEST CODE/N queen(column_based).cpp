///N_queen_column_based
#include<bits/stdc++.h>
using namespace std;
bool flag=false;
int counter=0;
int save2[100],save[100],minn;
bool place(int r,int c)
{
    for(int col=1;col<c;col++)
    {
      int row=save2[col];
      if(r==row)
      {
          return 0;
      }
      if(abs(col-c)==abs(row-r))
      {
          return 0;
      }
    }
    return true;
}
void backtrack(int c)
{
  if(c>8)
  {
      for(int i=1;i<=8;i++)
      {
         // cout<<"save[i]= "<<save[i]<<" save2[i]= "<<save2[i]<<endl;
          cout<<"row= "<<save[i]<<"\tand column= "<<i<<endl;
      }
      //cout<<counter<<endl;
      minn=min(minn,counter);
      counter=0;
      return;
  }
  else
  {
      for(int r=1;r<=8;r++)
      {
        if(place(r,c))
        {
            save2[c]=r;
            backtrack(c+1);
            save2[c]=0;
        }
      }
  }
}
int counter2=1;
int main()
{
    backtrack(1);
    return(0);
}

