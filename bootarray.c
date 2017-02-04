#include<stdio.h>
int main()
{
    int a[10],b[10],i,j=0;size,num,count=0;
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
            b[j]=i;
            count++;
            j++;
        }
    }
    for(j=0;j<count;j++)
    {
        printf("%d",b[j]);
    }
    if(count==0)
    {
        printf("\nNumber not present");
    }
    return 0;
}
