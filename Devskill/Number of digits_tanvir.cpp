#include<stdio.h>
#include<cstring>
int main()

{

    int t,i,len;

    char n[10000];

    scanf("%d",&t);

    for(i=1; i<=t; i++)

    {

        scanf("%s",&n);

        len=strlen(n);



        printf("%d\n",len);



    }

}
