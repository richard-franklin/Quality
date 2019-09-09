#include<stdio.h>
void main()
{
    int n,i;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    i=0;
    int j=1;
    while(i<n-1)
    {
        if(a[i]<a[j])
        {
            a[i]=0;
            i++;
            j++;
        }
        else if(a[i]==a[j])
            j++;
        else
        {
            i++;
            j++;
        }
    }
    int s=0;
    for(i=0;i<n;i++)
        s=s+a[i];
    printf("%d",s);
}
