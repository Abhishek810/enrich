#include<stdio.h>
int main()
{
    int num,i,j=0,count=1;
    printf("Enter the number:");
    scanf("%d",&num);
    while(num!=0)
    {
        i=j+1;
        printf("%d\t",i);
        j=count+(j+1);
        count++;
        num--;
    }
    return 0;
}
