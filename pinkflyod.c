#include <stdio.h>

int main()

{

    int n,k=0;

    scanf("%d",&n);

    int a[n];

    for(int i=0;i<n;i++)

    {
        
	scanf("%d",&a[i]);

        if(a[i]<=n)

            k++;

    }

    if(k==n)

        printf("Happy");

    else

        printf("Sad");

    return 0;

}
