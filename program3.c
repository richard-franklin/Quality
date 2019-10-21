#include<stdio.h>
int a[10000000],n;
void sort()
{
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-1-i;j++)
        {
            if(a[j]>a[j+1])
            {
                int t;
                t=a[j];
                a[j]=a[j+1];
                a[j+1]=t;
            }
        }
    }
}
void main() 
{
    int i,j,sum=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    sort();
    for(i=1;i<n;i++)
    { 
        for(j=i;j>=1;j--)
        {
            if(a[j-1]<a[i] && a[j-1]!=0)
            {
                a[j-1]=0;
                break;
            }
        }
    }
    for(i=0;i<n;i++)
        sum+=a[i];
    printf("%d",sum);
}
