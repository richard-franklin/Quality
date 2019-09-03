#include <stdio.h>
int main()
{
    int n,k=1,i=0,s=0;
    printf("Enter the number of coders :");
    scanf("%d",&n);
    int a[n];
    printf("Enter the skill points of each coders : ");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    for(i=0;i<n-1;i++)
    {
        for(int j=0;j<n-1-i;j++)
        {
            int t;
            if(a[j]>a[j+1])
            {
                t=a[j];
                a[j]=a[j+1];
                a[j+1]=t;
            }
        }
    }
    i=0;
    while(k<n)
    {
        if(a[i]<a[k])
        {
            a[i]=0;
            k++;
            i++;
        }
        else
        {
            k++;
        }
    }
    for(i=0;i<n;i++)
        s=s+a[i];
    printf("Minimum sum = %d",s);
    return 0;
}
