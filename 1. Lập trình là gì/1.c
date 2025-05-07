#include <stdio.h>

int main() {
    int a, b, tong;

    // Nhập hai số từ người dùng
    printf("Nhap so thu nhat: ");
    scanf("%d", &a);
    printf("Nhap so thu hai: ");
    scanf("%d", &b);

    // Tính tổng
    tong = a + b;

    // In kết quả
    printf("Tong hai so la: %d\n", tong);

    // Kiểm tra chẵn/lẻ
    if (tong % 2 == 0) {
        printf("Tong la so chan.\n");
    } else {
        printf("Tong la so le.\n");
    }

    return 0;
}
