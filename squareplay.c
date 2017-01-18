#include<stdio.h>
int main()
{
    int mat[4][4]={2,1,4,3,6,5,32,7,9,8,11,10,13,12,15,14};
    int i,j,a=1,b=2;
    char choice;
    for(i=0;i<4;i++)
    {
        printf("\n---------------------\n|");
        for(j=0;j<4;j++)
        {
            if(mat[i][j]==32)
            {
                printf("  %c |",mat[i][j]);
            }
            else if(mat[i][j]<10)
            {
                printf("  %d |",mat[i][j]);
            }
            else
            {
            printf(" %d |",mat[i][j]);
            }
        }
    }
    printf("\n---------------------");
    while(choice!='Q')
    {
        printf("\nPress U -> Up, D -> Down, L -> Left, R -> Right, Q -> Quit");
        scanf("%c",&choice);
        switch(choice)
        {
            case 'U':
            mat[a][b]=mat[a-1][b];
            a--;
            mat[a][b]=32;
            break;
            case 'D':
            mat[a][b]=mat[a+1][b];
            a++;
            mat[a][b]=32;    
            break;
            case 'L':
            mat[a][b]=mat[a][b-1];
            b--;
            mat[a][b]=32;
            break;
            case 'R':
            mat[a][b]=mat[a][b+1];
            b++;
            mat[a][b]=32;
            break;
            case 'Q':
            break;
        }
        for(i=0;i<4;i++)
        {
            printf("\n---------------------\n|");
            for(j=0;j<4;j++)
            {
                if(mat[i][j]==32)
                {
                    printf("  %c |",mat[i][j]);
                }
                else if(mat[i][j]<10)
                {
                    printf("  %d |",mat[i][j]);
                }
                    else
                {
                printf(" %d |",mat[i][j]);
                }
            }
        }
        printf("\n---------------------");
    }
    return 0;
}
