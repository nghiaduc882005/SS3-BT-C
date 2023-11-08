#include <stdio.h>
int main(){
    float math, literature, english;
    printf("Nhap diem toan: ");
    scanf("%f", &math);
    printf("Nhap diem van: ");
    scanf("%f", &literature);
    printf("Nhap diem anh: ");
    scanf("%f", &english);
    float TongDiem = math + literature + english;
    float DiemTrungBinh = math + literature + english / 3;
    printf("tongDiem: %.2f\n", math + literature + english);
    printf("DiemTrungBinh: %.2f\n", math + literature + english / 3);
}


