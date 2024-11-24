
#include <stdio.h>
int main()
{
 int t;
 printf("Nhap thang: ");
 scanf("%d", &t);
 if(t<=1 || t<=12)
 {
  switch(t)
  {
  case 1: case 3: case 5: case 7: case 8: case 10: case 12: 
   printf("Thang %d co 31 ngay", t); break;
  case 4: case 6: case 9: case 11:
   printf("Thang %d co 30 ngay", t); break;
  case 2:
    printf("Thang %d co 28 hay 29 ngay", t); break;
 default: 
 	printf("Khong ton tai thang nay");
  }
 }
 return 0;

}
