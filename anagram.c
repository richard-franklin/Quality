#include <stdio.h>
#include<string.h>
char* modify(char s[])
{
    int i,j;
    int len=strlen(s);
    for(i=0; i<len; i++)
	{
		if(s[i]==' ')
		{
			for(j=i; j<len; j++)
			{
				s[j]=s[j+1];
			}
		len--;
		}
	}
    return s;
}
int main()
{
    int i,j,l1,l2,c=0;
    char a[100],b[100];
    printf("Enter string 1 : ");
    //scanf("%s",a);
    fgets(a,100,stdin);
    //cin<<a;
    printf("Enter string 2 : ");
    fgets(b,100,stdin);
    strcpy(a,modify(a));
    strcpy(b,modify(b));
    l1=strlen(a);
    l2=strlen(b);
    if(l1!=l2)
        printf("NO\n");
    else
    {
        for(i=0;i<l1;i++)
        {
            for(j=0;j<l1;j++)
            {
                if(a[i]==b[j])
                {
                    c++;
                    a[i]=' ';
                    b[j]==' ';
                }    
            }
        }
        if(c==l1)
            printf("YES\n");
        else
            printf("NO\n");
    }
    return 0;
}