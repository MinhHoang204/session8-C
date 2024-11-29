#include <stdio.h>

int main() {
    // Khai bao va gan gia tri cho mot mang
    int array[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int length = sizeof(array) / sizeof(array[0]); // Tinh so phan tu cua mang

    // In tung phan tu tu cuoi ve dau
    printf("Cac phan tu cua mang tu cuoi ve dau:\n");
    for (int i = length - 1; i >= 0; i--) {
        printf("%d ", array[i]);
    }

    return 0;
}

