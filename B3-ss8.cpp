#include <stdio.h>

int main() {
    int n;

    // Yeu cau nguoi dung nhap vao so nguyen
    printf("Nhap vao so nguyen (kich thuoc ma tran): ");
    scanf("%d", &n);

    // Kiem tra neu n <= 0
    if (n <= 0) {
        printf("Kich thuoc ma tran phai lon hon 0.\n");
        return 1;
    }

    // Khoi tao mang 2 chieu
    int matrix[n][n];

    // Gan gia tri cho tung phan tu trong ma tran
    printf("Nhap cac gia tri cho ma tran:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("Nhap phan tu matrix[%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }

    // In mang ra duoi dang ma tran vuong
    printf("\nMa tran vua nhap la:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n"); // Xuong dong sau moi hang
    }

    return 0;
}

