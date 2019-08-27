#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int ary[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&ary[i]);
    }
    for(int i=1;i<n;i++)
    {
        if(ary[i]==0)
        ary[i-1]=0;
    }
    int sum=0;
    for(int i=0;i<n;i++)
    {
        sum=sum+ary[i];
    }
    printf("%d",sum);
    return 0;
}
