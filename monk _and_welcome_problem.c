#include<stdio.h>
void main()
{
    int i,n,a[100000],b[100000],c[100000];
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    for(i=0;i<n;i++)
        scanf("%d",&b[i]);
    for(i=0;i<n;i++)
        c[i]=a[i]+b[i];
    for(i=0;i<n;i++)
        printf("%d ",c[i]);
}