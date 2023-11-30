#include <stdio.h>

int main() {
    int a, b, temp;
    int *pa, *pb;

    printf("Nhap gia tri cua a: ");
    scanf("%d", &a);

    printf("Nhap gia tri cua b: ");
    scanf("%d", &b);

    pa = &a;
    pb = &b;

    printf("\nTruoc khi doi cho:\n");
    printf("a = %d\n", a);
    printf("b = %d\n", b);
    printf("Hieu cua a và b la %d\n", a - b);

    temp = *pa;
    *pa = *pb;
    *pb = temp;

    printf("\nSau khi doi cho:\n");
    printf("a = %d\n", a);
    printf("b = %d\n", b);
    printf("Hieu cua a và b la %d\n", a - b);

    return 0;
}
