#include <stdio.h>
#include <conio.h>
void main()
{
    int i;
    printf("XIN CHAO BOSS\n");
    for (i=100;i<=999;i++)
        if (((i/100)*(i/100)*(i/100)+((i%100)/10)*((i%100)/10)*((i%100)/10)+((i%100)%10)*((i%100)%10)*((i%100)%10))==i)
        printf("%d\n",i);
    getch();

}
