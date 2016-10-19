1. Cú pháp:
while (bt)
{
 S;
}
trong đó: bt là biểu thức điều kiện để tiếp tục vòng lặp
          S là câu lệnh hoặc khối lệnh
2. Ví dụ:
#include <stdio.h>
#include<conio.h>
int main ()
{
int i;
printf("\n Day so tu 1 den 10 :");
i=1;
while (i<=10)
printf("%d ",i++);
getch();
return 0;
}
