#include<stdio.h>
int n,a[100],b[100],i=0,j,k=0;
void main()
{
	printf("enter the size\n");
	scanf("%d",&n);
	printf("enter the marks\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("the ans is\n");
	for(i=0;i<n;i++)
	{
		for(j=i;j<n;j++)
		{
			if(a[i]<a[j])
			{
				b[k]=a[j];
				k++;
				break;
			}
		}
		i=j;
	}
	if(b[k-1]!=a[n-1])
	{
		b[k]=a[n-1];
		k++;
	}
	for(i=0;i<k;i++)
	{
		printf("%d ",b[i]);
	}

}
