#include<stdio.h>
int main()
{
    int num,rev=0,i,j,k=1,n,count=0;
    printf("Enter the number:");
    scanf("%d",&num);
    i=num;
    while(i!=0)
    {
        rev=(rev*10)+(i%10);
        i=i/10;
        count++;
    }
    if(num==rev)
    {
        printf("\n%d is palindrome",rev);
    }
    else
    {
        j=rev-num;
        while(count>2)
        {
            k=10*k;
            count--;
        }
        if(j<0)
        {
            j=(rev%k)-(num%k);
        }
        if(((num%k)+(j%k)>k)&&(k!=10))
        {
            n=num+(j%k)+(k/10);
            while(k>100)
            {
                k=k/100;
                n=n+k;
            }
        }
        else
        {
            n=num+(j%k);
        }
       printf("\nNew palindrome is %d",n);
    }
    return 0;
}
