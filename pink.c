#include<stdio.h>
void main()
{
    int n,i,j,f=0;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-1-i;j++)
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
    for(i=0;i<n;i++)
    {
        if(a[i]==i+1)
        {
            f=1;
        }
        else
        {
            f=0;
            break;
        }
    }
    if(f)
        printf("Happy");
    else
        printf("Sad");
}
