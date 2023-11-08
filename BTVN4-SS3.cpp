#include <stdio.h>
int main() {
    int a, b, c;
    printf("Nhap vao 3 so nguyen: ");
    scanf("%d %d %d", &a, &b, &c);
    int max = (a > b) ? ((a > c) ? a : c) : ((b > c) ? b : c);
    int min = (a < b) ? ((a < c) ? a : c) : ((b < c) ? b : c);
    printf("So nguyen lon nhat la: %d\n", max);
    printf("So nguyen nho nhat la: %d\n", min);
}
