#include <stdio.h>
int main()
{
    int n,i,k=0,j=1,top=-1,m=0;
    scanf("%d",&n);
    int a[n],p[n],s[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("\n");
    s[top]=n+1;
   for(i=0;i<n;i++)
   {
       if(a[i]==j)
       {
            p[k]=a[i];
            k++;
            j++;
            for(m=top;m>-1;m--)
            {    if(s[top]==j)
                {
                    p[k]=s[top--];
                    k++;
                    j++;
                }
                else
                    m=-1;
            }
       }
       else if(a[i]>s[top])
       {
            printf("Sad\n");
            exit(0);
        }
        else
        {
            s[++top]=a[i];
        }
        
   }
   printf("Happy\n");
    return 0;
}
