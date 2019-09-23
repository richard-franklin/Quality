    #include<stdio.h>
    int main()
    {
        int n,i,j;
        scanf("%d",&n);
        int a[n],c;
        for(i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
        }
        for(i=0;i<n-1;i++)
        {   c=0;
            for(j=i+1;j<n;j++)
            {  
                if(a[i]<a[j])
                {  
                    c=1;
                    break;
                }
            }
            if(c!=1)
              printf("%d ",a[i]);
        }
        printf("%d ",a[n-1]);
    }
