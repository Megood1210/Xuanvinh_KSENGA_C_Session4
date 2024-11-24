#include <stdio.h>

int main() {
    int a, b, c;

    printf("Nhap so thu nhat: ");
    scanf("%d", &a);
    
    printf("Nhap so thu hai: ");
    scanf("%d", &b);
    
    printf("Nhap so thu ba: ");
    scanf("%d", &c);
    
    if ((c > a && c < b) || (c > b && c < a)) {
        printf("So thu ba nam trong khoang giua so thu nhat và so thu hai\n");
    } else {
        printf("So thu ba khong nam trong khoang giua so thu nhat và so thu hai\n");
    }

    return 0;
}

