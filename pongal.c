#include <stdio.h>
#include<stdlib.h>
int main()
{
    char a[]="HAPPY PONGAL";
    int i;
    for(i=0;i<=11;i++)
    {
        printf("%c",a[i]);
        usleep(1000);
    }
    return 0;
}
