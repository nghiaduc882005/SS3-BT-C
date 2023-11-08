#include<stdio.h>
int main(){
	int n,thousand,hundred,dozen,unit;
	printf("Nhap vao cac gia tri:\n");
	scanf("%d",&n);
	unit = n%10; 
	dozen = (n/10)%10; 
	hundred = (n/100)%10;  
	thousand = (n/1000)%10; 
//Tinh tong cac chu so 
    int total = (unit + dozen + hundred + thousand);
//In ra chuoi dao nguoc
    int reverse =(unit*1000 + dozen*100 + hundred*10 + thousand);
    printf("Tong cac chu so: %d\n",total);
	printf("Day so dao nguoc: %d",reverse);
}
