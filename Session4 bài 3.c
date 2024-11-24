#include <stdio.h>

int main() {
   int a ;
   
   printf("Nhap vao so nguyen a = ");
   scanf("%d",&a);
   
  	
	if(a%3==0 && a%5==0){
		printf("%d chia het cho 5 va chia het cho 3\n",a);
	}else if(a%3==0){
		printf("%d khong chia het cho ca 3\n",a);	
	}else if(a%5==0){
		pritnf("%d chia het cho 5\n",a);
	}else{
		printf("%d khong chia het cho ca 3 va 5\n",a);
	}
	
	
	return 0;
}
