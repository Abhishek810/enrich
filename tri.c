#include<stdio.h>
int main()
{
    int i,j;
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
                printf("\t%d",i+1);
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
