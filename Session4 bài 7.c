#include <stdio.h>

int main() {
   int a;
   printf("Nhap vao so nam a : ");
   scanf("%d",&a);
     
   if (((a % 4 == 0) && (a % 100!= 0)) || (a%400 == 0))
      printf("%d la mot nam nhuan", a);
   else
      printf("%d khong phai la nam nhuan", a);
      
   return 0;
}

