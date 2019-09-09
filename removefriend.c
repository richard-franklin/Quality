#include<stdio.h>
int a[1000];
void main()
{
    int t,n,k;
    scanf("%d",&t);
    int i=0;
    while(i<t)
    {
        scanf("%d%d",&n,&k);
        for(int j=0;j<n;j++)
            scanf("%d",&a[j]);
        for(int j=0;j<k;j++)
            delete(n);
        for(int j=0;j<n-k;j++)
            printf("%d ",a[j]);
        printf("\n");
        i++;
    }
}
void delete(int n)
{
    int d=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]<a[i+1])
        {
            a[i]=0;
            d=1;
            break;
        }
    }
    if(d==0)
        a[n-1]=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]==0)
        {
            int t;
            t=a[i];
            a[i]=a[i+1];
            a[i+1]=t;
        }
    }
}
