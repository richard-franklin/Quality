#include<stdio.h>
void main()
{ 
	int t,a,b,c,i=1,j;
	scanf("%d",&t);
	while(i<=t)
	{
		scanf("%d%d%d",&a,&b,&c);
		j=0;
		while(a!=b)
		{
			if(a>b)
			{
				if((a-2)>=b)
					a=a-2;
				else
					a=a-1;            
			}            
			else                
				a=a*c;            
			j=j+1;
		}
		printf("%d\n",j);
		i++;
	}
}
