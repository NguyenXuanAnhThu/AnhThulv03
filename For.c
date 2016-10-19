1. Cú pháp:
 for (<bt1>;<bt2>;<bt3>)
   {
     S;
   }
trong đó : bt1 là gán giá trị
           bt2 là thể hiện điều kiện tiếp tục vòng lặp
           bt3 là lệnh gán có tác dụng làm thay đổi giá trị của biến điều khiển
2. Ví dụ:
 In các số nguyên tố từ 1 đến 10:
 #include <stdio.h>
 #include <conio.h>
 void main()
 {
  int i;
  for (i=1;i<10;i++)
  printf ("%d",i);
  getch ();
 }
