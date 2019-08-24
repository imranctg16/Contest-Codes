/*
    Mohammad imran hossain
   International Islamic university,chittagong
   Date: 2016-05-23-20.23.18 Monday
   imranhossain16.ctg@gmail.com
   Back to the 8 queen(uva 11085)
*/
/*
   /// getting the running time
   #include <ctime>
  clock_t tStart=clock();


  .....code

    printf("Execution Time: %.2fs\n", (double)(clock() - tStart)/CLOCKS_PER_SEC);
*/

#include<bits/stdc++.h>
using namespace std;
#define debug cout<<"came here"<<endl;
#define output freopen("back to the 8 queen.txt","w+",stdout);
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
    //ios_base::sync_with_stdio(0);
   // cin.tie(NULL);

        backtrack(1);

    }
    return(0);
}

