#include<cstdio>
#include<cmath>
using namespace std;
int t;
double number,n,ans,save,pre;

int main()
{
    scanf("%d",&t);
    pre= pow(2,0.5);
    while(t--)
    {
        scanf("%lf%lf",&number,&n);
        n =floor( n * 100.00 + 0.5 ) / 100;
        save=2*number;
        save=save/pre;
        save =floor( save * 100.00 + 0.5 ) / 100;
        //printf("Minimum side lenth of a square %f\n",(double)save);
        if(n==save)
            printf("Yes\n");

        else
        {
            printf("No\n");
        }
    }
    return 0;
}
