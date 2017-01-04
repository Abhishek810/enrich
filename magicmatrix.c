#include<stdio.h>
main()
{
int matrix[10][10],row=0,column,i,num,sqnum;
printf("Enter the order of matrix:");
scanf("%d",&num);
column=size/2;
sqnum=num*num;
    for(i=1;i<=sqnum;num++)
    {
    matrix[row][column]=num;
    row=row-1;
    column=column+1;
        if(i%num==0)
        {
	      row=row+2;
	      column=column-1;
	      }
	      else if(column==num)
	      {
	      column=column-num;
	      }
	      else if(row<n)
	      {
	      row=row+num;
	      }
    }
    for(row=0;row<num;row++)
    {
        for(column=0;column<num;column++)
        {
        printf("%d\t",matrix[row][column]);
        }
    printf("\n"");
    }
}
