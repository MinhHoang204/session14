#include <stdio.h>

int main()
{
    int choice;
    int arr[100], arr2[100], n, i, j, temp, flag, pos, c;
    char ch, search;

    do
    {
        printf("\nMENU\n");
        printf("1. Nhap vao mang\n");
        printf("2. In ra mang\n");
        printf("3. Sao chep mang vao mang khac\n");
        printf("4. Nhap vao mang khac, doi cho 2 mang voi nhau\n");
        printf("5. Dao nguoc mang\n");
        printf("6. Nhap vao 1 ky tu, tim kiem ky tu do trong mang\n");
        printf("7. Thoat\n");
        printf("Lua chon cua ban: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("Nhap so phan tu cua mang: ");
            scanf("%d", &n);
            printf("Nhap cac phan tu cua mang:\n");
            for (i = 0; i < n; i++)
            {
                scanf("%d", &arr[i]);
            }
            break;

        case 2:
            printf("Mang cua ban la:\n");
            for (i = 0; i < n; i++)
            {
                printf("%d ", arr[i]);
            }
            printf("\n");
            break;

        case 3:
            for (i = 0; i < n; i++)
            {
                arr2[i] = arr[i];
            }
            printf("Mang da sao chep la:\n");
            for (i = 0; i < n; i++)
            {
                printf("%d ", arr2[i]);
            }
            printf("\n");
            break;

        case 4:
            printf("Nhap so phan tu cua mang khac: ");
            scanf("%d", &c);
            printf("Nhap cac phan tu cua mang khac:\n");
            for (i = 0; i < c; i++)
            {
                scanf("%d", &arr2[i]);
            }
            for (i = 0; i < n; i++)
            {
                temp = arr[i];
                arr[i] = arr2[i];
                arr2[i] = temp;
            }
            printf("Mang sau khi doi cho la:\n");
            printf("Mang 1: ");
            for (i = 0; i < n; i++)
            {
                printf("%d ", arr[i]);
            }
            printf("\nMang 2: ");
            for (i = 0; i < c; i++)
            {
                printf("%d ", arr2[i]);
            }
            printf("\n");
            break;

        case 5:
            for (i = 0, j = n - 1; i < j; i++, j--)
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
            printf("Mang sau khi dao nguoc la:\n");
            for (i = 0; i < n; i++)
            {
                printf("%d ", arr[i]);
            }
            printf("\n");
            break;

        case 6:
            printf("Nhap so phan tu cua mang: ");
            scanf("%d", &n);
            printf("Nhap cac phan tu cua mang:\n");
            for (i = 0; i < n; i++)
            {
                scanf(" %c", &ch);
                arr[i] = ch;
            }
            printf("Nhap ky tu can tim kiem: ");
            scanf(" %c", &search);
            flag = 0;
            for (i = 0; i < n; i++)
            {
                if (arr[i] == search)
                {
                    flag = 1;
                    pos = i;
                    break;
                }
            }
            if (flag == 1)
            {
                printf("Ky tu %c co trong mang tai vi tri %d.\n", search, pos);
            }
            else
            {
                printf("Khong tim thay ky tu %c trong mang.\n", search);
            }
            break;

        case 7:
            printf("Cam on ban da su dung chuong trinh!\n");
            break;

        default:
            printf("Lua chon khong hop le. Vui long chon lai.\n");
        }
    } while (choice != 7);
}
return 0;
