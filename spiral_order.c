#include<stdio.h>
void result(int spiral_order);
int main()
{
    int number;
    scanf("%d",&number);
    result(number);
    return 0;
}
void result(int spiral_order)
{
    int matrix[20][20],row,column,i,j;
    for(i=0;i<spiral_order;i++)
    {
        for(j=0;j<spiral_order;j++)
        {
            if(i%2==0)
            {
                matrix[i][j]=(spiral_order*i)+(j+1);
                printf("%d\t",matrix[i][j]);
            }
            else
            {
                matrix[i][j]=((i+1)*spiral_order)-j;
                printf("%d\t",matrix[i][j]);
            }
        }
        printf("\n");
    }
}
