#include <stdio.h>

int main() {
    // Khai bao va gan gia tri cho ma tran vuong
    int n = 4;  // Kich thuoc ma tran vuong (4x4)
    int matrix[4][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12},
        {13, 14, 15, 16}
    };

    int sum = 0;  // Tong cac phan tu tren duong cheo chinh

    // In cac phan tu tren duong cheo chinh va tinh tong
    printf("Cac phan tu tren duong cheo chinh la:\n");
    for (int i = 0; i < n; i++) {
        // Phan tu tren duong cheo chinh co chi so [i][i]
        printf("%d ", matrix[i][i]);
        sum += matrix[i][i];
    }

    // In tong cac phan tu tren duong cheo chinh
    printf("\nTong cac phan tu tren duong cheo chinh la: %d\n", sum);

    return 0;
}
