#include <stdio.h>

int main() {
    // Khai bao va gan gia tri cho mang hai chieu
    int array[3][3] = {
        {1, 5, 3},
        {7, 2, 8},
        {4, 6, 9}
    };

    // Khoi tao bien de luu gia tri lon nhat
    int max = array[0][0];

    // Duyet qua cac phan tu cua mang
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (array[i][j] > max) {
                max = array[i][j];
            }
        }
    }

    // In ra phan tu lon nhat
    printf("Phan tu lon nhat trong mang la: %d\n", max);

    return 0;
}

