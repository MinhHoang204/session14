#include<stdio.h>
// Ham su dung con tro de hoan doi gia tri cua hai bien
void hoanDoi(int*a, int*b){
	int temp = *a;
	*a = *b;
	*b = temp;
}
int main(){
	int x,y;
	// Nhap gia tri cho hai bien
	printf("Nhap gia tri cho bien x: ");
	scanf("%d", &x);
	printf("Nhap gia tri cho bien y: ");
	scanf("%d", &y);
	// Hien thi gia tri truoc khi bien doi
	printf("Gia tri truoc khi bien doi: x = %d, y= %d\n", x, y);
	// Goi ham de hoan doi gia tri
	hoanDoi (&x,&y);
	// Hien thi gia tri sau khi hoan doi
	printf("Gia tri sau khi hoan doi: x = %d, y = %d\n", x, y);
	return 0;
}
