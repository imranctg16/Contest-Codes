/*
    Mohammad imran hossain
   International Islamic university,chittagong
   Date: 2016-05-23-01.29.02 Monday
   imranhossain16.ctg@gmail.com
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
#define output freopen("output.txt","w+",stdout);
int save[30][30]={0};

int N;
bool flag=false;

bool place(int i,int j)
{
    for(int x=1;x<i;x++)
    {
        for(int y=1;y<=N;y++)
        {

           if(save[x][y]==y)
           {
               return 0;
           }
           if(abs(i-x)==abs(j-y))
           {
               return 0 ;
           }
        }
    }
    return 1;
}
void print()
{

    for(int i=1;i<=N;i++)
    {
        for(int j=1;j<=N;j++)
        {
          cout<<save[i][j]<<" ";
        }
        cout<<endl;
    }
}
void hold(int r,int c)
{
    if(r>N)
    {
        print();
        flag=true;
        return;
    }
    else
    {
        if(!flag)
        {
        for(int i=r;i<=N;i++)
        {
            for(int j=1;j<=N;j++)
            {
                cout<<"i= "<<i<<" j= "<<j<<endl;
                if(place(i,j))
                {
                    save[i][j]=j;
                    cout<<"i and j ="<<i<<" "<<j<<"and value= "<<save[i][j]<<endl;
                    cout<<"r= "<<r<<endl;
                    hold(++r,j);
                    save[i][j]=0;
                }
            }
        }
        }

    }
}

void init()
{
    for(int i=1;i<=N;i++)
    {
        for(int j=1;j<=N;j++)
        {
            save[i][j]=0;
        }
    }
}


int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);

    init();
    cout<<"enter the NUmber of queen\n";
    cin>>N;

    hold(1,1);
    return(0);
}
