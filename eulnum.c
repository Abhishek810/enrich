#include <stdio.h>
int main()
{
    int a[6][6],i,j,sum,k,l,m,count;
    for(i=1;i<7;i++)
    {
        for(j=0;j<i;j++)
        {
            if((j==0)||(i==j+1))
            {
                a[i][j]=1;
                printf("%d\t",a[i][j]);
            }
            else if((j==1)&&(i==3))
            {
                a[i][j]=4;
                printf("%d\t",a[i][j]);
            }
            else if(i>3)
            {
                sum=0;
                k=0;
                while(k<i-1)
                {
                    sum=sum+a[i-1][k];
                    k++;
                }
                count=i-3;
                if(i==4)
                {
                    l=sum+count+a[i-1][1];
                    a[i][j]=l;
                    printf("%d\t",a[i][j]);
                }
                if(i==5)
                {
                    if(j%2!=0)
                    {
                        l=sum+count;
                        a[i][j]=l;
                        m=l;
                    }
                    else
                    {
                        l=(sum*i)-((2*(sum+count))+2);
                        a[i][j]=l;
                    }
                    printf("%d\t",a[i][j]);
                }
                if(i==6)
                {
                    m=(2*a[5][1])+5;
                    l=((sum*i)-((2*m)+2))/2;
                    if((j==1)||(j==4))
                    {
                        a[i][j]=m;
                        printf("%d\t",a[i][j]);
                    }
                    else
                    {
                        a[i][j]=l;
                    printf("%d\t",a[i][j]);
                    }
                }
            }
        }
        printf("\n");
    }
    return 0;
}
