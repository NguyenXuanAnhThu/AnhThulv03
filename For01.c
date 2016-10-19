#include <stdio.h>
#include <conio.h>
void main()
{
    int n,i;
    float S;
    printf("XIN CHAO BOSS\n");
    printf("Moi cac ban nhap n\n");
    scanf("%d",&n);
    for (i=1;i<=n;i++)
        S+=(float)1/i;
    printf("tong la S=%f",S);
    getch();

}
