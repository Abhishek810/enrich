#include<stdio.h>
int main()
{
    int num,n,i,flag=0;
    printf("\nEnter the number:");
    scanf("%d",&num);
    for(n=num+1;n<num+100;n++)
    {
        for(i=2;i<n;i++)
        {
            if(n%i==0)
            {
                flag=1;
                break;
            }
        }
        if(flag==0)
        {
            printf("%d",n);
            break;
        }
        flag=0;
    }
    return 0;
}
