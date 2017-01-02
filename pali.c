#include <stdio.h>
#include<string.h>
main() 
{
    int length,i,j,c=0,d=0;
    char a[100],b[100];
    printf("/n Enter the string:");
    scanf("%s",a);
    strcpy(b,a);
    length=strlen(b);
        for(i=0;i<n-1;i++)
        {	
            for(j=i+1;j<n;j++)
            {
                 if(b[i]==b[j])
                 {
                 b[i]=b[j]=0;
                 }
            }
        }
        for(i=0;i<n;i++)
        {
             if(b[i]!=0)
             {
             c=1;
             d++;
             }
        }
        if(c==0)
        {
        printf("/n TRUE");
        }
        else if(d>1) 
        {
        printf("/n FALSE");
        }
        else
        {	
        printf("/n TRUE");
        }
}
