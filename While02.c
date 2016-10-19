#include <stdio.h>
#include <conio.h>
void main()
{
    float cv,dt,a;
    printf("HI BOSS\n");
    printf("nhap cv \n");
    scanf("%f",&cv);
    a=0;
    while (a<=cv/4)
    {
        a++;
        if (a==cv/4)
            printf("dtmax=%0.1f",dt,dt=a*a);
    }
    getch ();
}
