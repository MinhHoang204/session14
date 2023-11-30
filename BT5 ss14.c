#include<stdio.h>
int main(){
	int n;
    printf("Nhap so phan tu cua mang: ");
    scanf("%d", &n);

    int arr[n];
    printf("Nhap cac phan tu cua mang:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    int *p, *q, temp;
    for (p = arr; p < arr + n - 1; p++) {
        for (q = p + 1; q < arr + n; q++) {
            if (*p < *q) {
                temp = *p;
                *p = *q;
                *q = temp;
           }
       }
   }
   int *p, *q, temp;
   for (p = arr + 1; p < arr + n; p++) {
        temp = *p;
        q = p - 1;
        while (q >= arr && *q > temp) {
            *(q + 1) = *q;
            q--;
       }
       *(q + 1) = temp;
   }
   return 0; 
} 
