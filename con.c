#include<stdio.h>
main()
{
	int a[100],x,i,c=0,n;
	printf("\nEnter the size of array:");
	scanf("%d",&n);
	printf("\nEnter the elements of the array");
		for(i=0;i<n;i++)
		{
		scanf("%d",&a[i]);
		}
	printf("\nEnter the element to be searched");
	scanf("%d",&x);
		for(i=0;i<n;i++)
		{
			if(a[i]==x)
			{
			c=c+1;
			}
		}
	printf("\nThe number of occurance of the number %d is %d",x,c);
}
