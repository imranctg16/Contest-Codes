#include<cstdio>
int n,t,number,counter=1,save,save2,take,take2,ans;
int main()
{
	//while(1){
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d%d",&take,&take2);
		ans=take+take;
		ans=(ans)+(take2+take2+take2);
		printf("Case %d: %d\n",counter++,ans);
	}
	//}
    return 0;
}




