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

    int sum = 0;  // Tong cac phan tu tren duong cheo phu

    // In cac phan tu tren duong cheo phu va tinh tong
    printf("Cac phan tu tren duong cheo phu la:\n");
    for (int i = 0; i < n; i++) {
        // Phan tu tren duong cheo phu co chu so [i][n-i-1]
        printf("%d ", matrix[i][n-i-1]);
        sum += matrix[i][n-i-1];
    }

    // In tong cac phan tu tren duong cheo phu
    printf("\nTong cac phan tu tren duong cheo phu la: %d\n", sum);

    return 0;
}

