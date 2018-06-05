#include "functii.h"
void change(int s,int n,int a[])
{   int INT_MAX;
	unsigned int aux[10000],t[10000],i,j;


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
	i=s;
	if(t[s]<s)
	{
	 while(i>0)
	 {
	  	printf("%d ",aux[i]);
		i=i-aux[i];
	 }
	 printf("The minimum number of coins %d \n",t[s]);
	}
	else
	printf("The amount you entered can not be fully refunded with the coins you entered.");
}





