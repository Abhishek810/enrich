#include<stdio.h>
int main()
{
    int i,j,k;
    printf("%d\n",1);
    for(i=1;i<6;i++)
    {
        for(j=0;j<=i;j++)
        {
            if(j==0)
            {
                printf("%d",1);
            }
            else if(i>j)
            {
                k=fact(i)/(fact(j)*fact(i-j));
                printf("\t%d",k);
            }
            else if(i=j)
            {
                printf("\t%d",1);
                printf("\n");
            }
        }    
    }
    return 0;
}
int fact(int a)
{
    int f=1;
    while(a>0)
    {
        f=f*a;
        a--;
    }
    return f;
}
