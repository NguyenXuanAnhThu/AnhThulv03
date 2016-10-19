#include <stdio.h>
#include <conio.h>
void main()
{
    int a,b,k;
    printf("HI BOSS\n");
    printf("Moi nhap a, b\n");
    scanf("%d%d",&a,&b);
    while (k!=0)
    {
        k=a%b;
        a=b;
        b=k;
    }
      printf("uoc chung lon nhat=%d",a);
 getch ();
}
