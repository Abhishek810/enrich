#include<stdio.h>
int main()
{
    int a[10],i,size,num;
    //Size of array
    scanf("%d",&size);
    //Elements of array
    for(i=0;i<size;i++)
    {
        scanf("%d",&a[i]);
    }
    //Number to be searched
    scanf("%d",&num);
    for(i=0;i<size;i++)
    {
        if(a[i]==num)
        {
            printf("\n%d",i);
            break;
        }
    }
    if(i==size)
    {
        printf("\nNumber not present");
    }
    return 0;
}
