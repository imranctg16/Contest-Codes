#include <bits/stdc++.h>
using namespace std;
map<long,long> m;

int main(){
    long T,i,j,k,l,x,n,mj;

    scanf("%ld", &T);

    while(T--){

        scanf("%ld", &n);
        mj = n/2; ///took the half

        map<long,long>::iterator p;




        while(n--){
            scanf("%ld", &x);
            m[x]++; /// key nichi ,,r value increase kortsi

        }

        long s = m.size();


        cout<<"s= "<<s<<endl;

        cout<<"its relative value is= "<<p->second;


        for(j = 1; j <= s; j++)
        {
            cout<<"m["<<j<<"]="<<m[j]<<endl;
            if(m[j] > mj)
            {
                k = j;
                break;
            }
            else
                k = 0;
        }
        if(k == 0)
            printf("no majority number\n");
        else
            printf("%ld\n",k);
        m.clear();
    }
    return 0;
}
