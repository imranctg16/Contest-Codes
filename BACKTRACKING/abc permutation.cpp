/*
    Mohammad imran hossain
   International Islamic university,chittagong
   Date: 2016-05-23-00.05.25 Monday
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
#include <ctime>
using namespace std;
#define debug cout<<"came here"<<endl;
#define output freopen("output.txt","w+",stdout);

string s;
vector<char>v;
map<char,int>check;


void call()
{
    if(v.size()==s.size())
    {

        for(int i=0; i<v.size(); i++)
        {
            cout<<v[i];
        }
        cout<<endl;
    }
    else
    {

        for(int i=0; i<s.size(); i++)
        {
            if(!check[s[i]])
            {
                check[s[i]]=1;
                v.push_back(s[i]);
                call();
                check[s[i]]=0;
                v.pop_back();
            }
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);

     clock_t tStart=clock();

    cin>>s;
    call();

    printf("Execution Time: %.2fs\n", (double)(clock() - tStart)/CLOCKS_PER_SEC);

    return(0);

}
