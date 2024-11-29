#include <stdio.h>

int main() {
    // Khai bao va gan gia tri cho mot ma tran
    int rows = 4, cols = 4; // Kich thuoc ma tran
    int matrix[4][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12},
        {13, 14, 15, 16}
    };

    int sum = 0; // Tong cac phan tu tren duong bien

    // Tinh tong cac phan tu tren duong bien
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            // Kiem tra neu phan tu nam tren duong bien
            if (i == 0 || i == rows - 1 || j == 0 || j == cols - 1) {
                sum += matrix[i][j];
            }
        }
    }

    // In ket qua ra man hinh
    printf("Tong cac phan tu tren duong bien cua ma tran la: %d\n", sum);

    return 0;
}

