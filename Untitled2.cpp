#include <stdio.h>

int main() {
    int num, sum = 0;
    printf("Nhap 5 so nguyên:\n");
    for (int i = 1; i <= 5; i++) {
        printf("So thu %d: ",i);
        scanf("%d",&num);
        if (num % 2 != 0) {
            sum += num;
        }
    }
    printf("Tong cac so le là: %d\n", sum);
    return 0;
}

