#include<stdio.h>
int T,M,N,i=1;
int main()
{
	scanf("%d",&T);
	while(i<=T)
        {
            scanf("%d",&N);
            scanf("%d",&M);
            if(M%N==0)
            	printf("Yes\n");
            else
                printf("No\n");
	    i++;
   	}
	return 0;
}
