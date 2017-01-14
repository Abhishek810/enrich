#include<stdio.h>
int main()
{
    int i,j,a,c;
    for(i=0;i<5;i++)
    {
        c=i;
        for(j=0;j<9;j++)
        {
            a=i+j;
            if((a%2==0)&&(a>=4)&&(c>=0))
            {
                printf("*\t");
                c--;
            }
            else
            {
                printf("\t");
            }
        }
        printf("\n");
    }
    return 0;
}
