#include<stdio.h>
int main()
{
    int a[10],i,size,num,count=0,j,temp;
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
        for(j=i+1;j<size;j++)
        {
            if(a[i]>a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    for(i=0;i<size;i++)
    {
        if(a[i]==num)
        {
            printf("%d\t",i);
            count++;
        }
    }
    if(count==0)
    {
        printf("\nNumber not present");
    }
    return 0;
}
