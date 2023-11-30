#include<stdio.h>
// Ham su dung con tro de dem so ki tu 2
int DemKitu(char*chuoi){
	int dem = 0;
	char*ptr = chuoi;
	while(ptr != '\0'){
		dem++;
		ptr++
	}
	return dem;
}
int main(){
	char chuoi[100];
	// Nhap chuoi ki tu
	printf("Nhap chuoi ki tu: ");
	scanf("%s", chuoi);
	// Dem so ki tu su dung con tro
	int soKiTu = demKiTu(chuoi);
	// Hien thi so ki tu
	printf("So ki tu trong chuoi la: %d\n", soKiTu);
	return 0;
}
