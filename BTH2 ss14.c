#include<stdio.h>
// Ham su dung con tro de tinh tong cac so nguyen tu doan cho truoc
int tinhTong(int*BatDau, int*KetThuc){
	int tong = 0;
	int *prt = BatDau;
	while (ptr <= KetThuc){
		tong += *ptr;
		ptr++;
	}
	return tong;
}
int main(){
	int BatDau, KetThuc;
	// Nhap don so nguyen
	printf("Nhap gia tri bat dau: ");
	scanf("%d", &BatDau);
	printf("Nhap gia tri ket thuc: ");
	scanf("%d", &KetThuc);
	// Tinh tong su dung con tro
	int tong = tinhTong(&BatDau, &KetThuc);
	// Hien thi tong
	printf("Tong cac so nguyen tu %d den %d la: %d\n"Batdau, KetThuc, tong);
	return 0;
}
