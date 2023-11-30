#include <stdio.h>
#include <string.h>

int main()
{
    char str[100], str2[100], str3[100];
    int choice;

    while (1)
    {
        printf("\nMENU\n");
        printf("1. Nhap vao chuoi\n");
        printf("2. In ra chuoi\n");
        printf("3. Sao chep chuoi vao mot chuoi khac\n");
        printf("4. Them chuoi vao chuoi ban dau\n");
        printf("5. So sanh chuoi voi chuoi ban dau\n");
        printf("6. In ra chuoi dao nguoc\n");
        printf("7. Thoat\n");

        printf("Nhap vao lua chon cua ban: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("Nhap vao chuoi: ");
            scanf("%s", str);
            break;

        case 2:
            printf("Chuoi vua nhap la: %s\n", str);
            break;

        case 3:
            strcpy(str2, str);
            printf("Chuoi sau khi sao chep la: %s\n", str2);
            break;

        case 4:
            printf("Nhap vao chuoi can them: ");
            scanf("%s", str3);
            strcat(str, str3);
            printf("Chuoi sau khi them la: %s\n", str);
            break;

        case 5:
            printf("Nhap vao chuoi can so sanh: ");
            scanf("%s", str2);

            if (strcmp(str, str2) == 0)
                printf("Hai chuoi giong nhau.\n");
            else
                printf("Hai chuoi khac nhau.\n");

            break;

        case 6:
            printf("Chuoi dao nguoc la: ");
            for (int i = strlen(str) - 1; i >= 0; i--)
                printf("%c", str[i]);
            printf("\n");
            break;

        case 7:
            printf("Cam on ban da su dung chuong trinh!\n");
            return 0;

        default:
            printf("Lua chon khong hop le. Vui long chon lai.\n");
        }
    }

    return 0;
}
