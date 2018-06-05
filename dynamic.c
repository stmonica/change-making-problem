#include "functii.h"
void swap(int tablou[],int left,int right)
{
	int temp;
	temp=tablou[left];
	tablou[left]=tablou[right];
	tablou[right]=temp;
}
void insertion_sort(int tablou[],int dim)
{
    int i;
	for(i=0;i<dim;i=i+1)
	{
		int j=i;
		while(j>0)
		{
			if(tablou[j]<tablou[j-1])
			{
				swap(tablou,j,j-1);
			}
			j--;
		}
	}
}
