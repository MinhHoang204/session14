#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100];
    char *p1 = str1, *p2 = str2;
    int len1, len2;

    printf("Nhap chuoi thu nhat: ");
    gets(str1);
    printf("Nhap chuoi thu hai: ");
    gets(str2);

    len1 = strlen(str1);
    len2 = strlen(str2);

    printf("Do dai chuoi thu nhat la: %d\n", len1);
    printf("Do dai chuoi thu hai la: %d\n", len2);

    if (len1 > len2) {
        printf("Chuoi thu nhat dai hon chuoi thu hai.\n");
    } else if (len2 > len1) {
        printf("Chuoi thu hai dai hon chuoi thu nhat.\n");
    } else {
        printf("Hai chuoi co do dai bang nhau.\n");
    }

    return 0;
}
