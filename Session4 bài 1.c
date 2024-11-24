#include <stdio.h>

int main() {
   int a ;
   
   printf("Nhap vao so nguyen a = ");
   scanf("%d",&a);
   
   if(a > 0)
      printf("%d la so duong\n", a);
   else if(a<0)
      printf("%d la so am\n", a);
	else 
	  printf("%d bang 0\n", a);
   
   return 0;
}
