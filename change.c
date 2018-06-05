#include "functii.h"
void change(int s,int n,int a[])
{
	unsigned int t[10000],aux[10000],i,j;


	t[0]=0;
	for(i=1;i<=s;i++)
	{
		t[i]=INT_MAX;
	}
	for(i=1;i<=s;i++)
	{
		for(j=0;j<=n-1;j++)
		{
			if(( a[j]<=i )&& (1+t[i-a[j]]<t[i]))
			{
				t[i]=1+t[i-a[j]];
				aux[i]=a[j];
			}
		}
	}
	int Max = 0;
	for (i = 0;i<n;i++ )
	{
		if ( a[i] > Max )
			Max = a[i];
	}
	int *c = (int*)calloc(Max+1,sizeof(int));

	i=s;
	if(t[s]<s)
	{
		printf("\n");
		printf("\n \nThe coins used:\n");
		while(i>0)
		{
			c[ aux[i] ]++;
			i=i-aux[i];
		}
		printf("\n\n");
		for ( int i = 0 ; i <= Max ; i++ )
		{
			if ( c[i] != 0 )
			{
				printf("Coin %d is used %d times\n",i,c[i]);
			}
		}
		printf("\nThe minimum number is  %d \n",t[s]);
	}
	else
	{
		printf("\nThe sum can't  be refunded with  coins inserted!! \n");
	}
	free(c);
}
