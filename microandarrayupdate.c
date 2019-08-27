#include<stdio.h>
int main()
{
    int i=0,s,k=0,j,t,n,k1;
    scanf("%d",&t);
    scanf("%d%d",&n,&k1);
    int a[n];
    while(i<t)
    {
        k=0;
       for(j=0;j<n;j++)
            scanf("%d",&a[j]);
        s=a[0];
        for(j=1;j<n;j++)
        {
            if(a[j]<s)
            {
                s=a[j];
            }
        }
        printf("%d\n",k1-s);
        scanf("%d%d",&n,&k1);
        i++;
    }
}
