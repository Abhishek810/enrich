#include<stdio.h>
void second_largest_even(int sort[],int no_of_elements);
int main()
{
    int array[100],size,i;
    scanf("%d",&size);
    for(i=0;i<size;i++)
    {
        scanf("%d",&array[i]);
    }
    second_largest_even(array,size);
    return 0;
}
void second_largest_even(int sort[],int no_of_elements)
{
    int j,temp,no_of_even=0,k=0;
    for(j=0;j<no_of_elements;j++)
    {
        if(sort[j]%2==0)
        {
            sort[k]=sort[j];
            k++;
            no_of_even++;
        }
    }
    for(k=0;k<no_of_even;k++)
    {
        for(j=k+1;j<no_of_even;j++)
        {
            if(sort[k]<sort[j])
            {
                temp=sort[k];
                sort[k]=sort[j];
                sort[j]=temp;
            }
        }
    }
    printf("%d",sort[1]);
}
