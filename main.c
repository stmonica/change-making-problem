#include "functii.h"

void change(int s,int n,int a[]);

int main(int argc,char *argv[])
{
	int s,n,i,a[10000],k;

	srand (time(NULL));

	printf("Press 1  for random  data input \n");
	printf("Press 2 for manual  data input \n");

	scanf("%d",&k);
	 if(k!=1 &&k!=2 )
	{
		do
		{   printf("Wrong! enter again more carefully!\n ");
			scanf("%d",&k);
		}
		while(k!=1 && k!=2);
	}
	if(k==1)
	{

		n=rand () % 3+1;
		printf("The total number  of denominations %d \n ",n);
		s=rand () % 100+50;
		printf(" Sum %d \n ",s);
		printf("The sum is :%d \n" ,s);

		printf("Coins");
		for(i=0;i<=n-1;i++)
		{
			a[i]=rand () %10+5;
			printf(" %d ",a[i]);
		}
		printf("The coins are :");
		for(i=0;i<=n-1;i++)
		{
			printf("%d ",a[i]);
		}
		change(s,n,a);
	}
	if(k==2)
	{
		scanf("%d %d ",&n,&s);

		int *a=(int*)malloc(n*sizeof(int));

		printf("The sum is :%d \n" ,s);
		printf("The total number of the denominations is : %d\n" ,n);
		for(i=0;i<=n-1;i++)
		{
			scanf("%d",&a[i]);
		}
		printf("The coins are :");
		for(i=0;i<=n-1;i++)
		{
			printf("%d ",a[i]);
		}
		change(s,n,a);
	}
	system("PAUSE");
}
