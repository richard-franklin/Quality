/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int i,n,j,k,t;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    for(i=0;i<n;i++)
    {
        for(j=0;j<n-1;j++)
        {
            if(a[j]!=0&&a[j+1]!=0)
            {
                if(a[j]<a[j+1])
                    a[j]=0;
            }
        }
        for(k=0;k<n-1;k++)
        {
            if(a[k]==0)
            {
                t=a[k];
                a[k]=a[k+1];
                a[k+1]=t;
            }
        }
    }
    for(i=0;i<n;i++)
    {
        if(a[i]!=0)
            printf("%d ",a[i]);
    }
}
