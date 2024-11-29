#include <stdio.h>

int main() {
    // Khai bao va gan gia tri cho mot mang
    int array[] = {10, 20, 30, 40, 50, 60};
    int length = sizeof(array) / sizeof(array[0]); // Tinh so phan tu cua mang

    // Bien de luu phan tu nguoi dung nhap
    int x, found = 0;

    // Nhap phan tu tu nguoi dung
    printf("Nhap phan tu can tim: ");
    scanf("%d", &x);

    // Kiem tra phan tu trong mang
    for (int i = 0; i < length; i++) {
        if (array[i] == x) {
            printf("Vi tri phan tu trong mang la: %d\n", i);
            found = 1;
            break;
        }
    }

    // Neu khong tim thay
    if (!found) {
        printf("Phan tu khong ton tai trong mang.\n");
    }

    return 0;
}

