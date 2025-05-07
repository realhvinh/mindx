#include <stdio.h>

// Biến toàn cục
int bienToanCuc = 100;

int main() {
    // Biến cục bộ
    int tuoi = 0;
    float diem = 0.0;
    char kyTu;
    const float PI = 3.14; // Hằng số

    // Gán và in giá trị
    tuoi = 20;
    diem = 8.5;
    kyTu = 'A';

    printf("Gia tri ban dau:\n");
    printf("Tuoi: %d, Diem: %.1f, Ky tu: %c\n", tuoi, diem, kyTu);

    // Thay đổi giá trị
    tuoi = 22;
    diem = 9.0;
    kyTu = 'B';

    printf("\nGia tri sau khi thay doi:\n");
    printf("Tuoi: %d, Diem: %.1f, Ky tu: %c\n", tuoi, diem, kyTu);

    // Nhập dữ liệu từ bàn phím
    printf("\nNhap tuoi moi: ");
    scanf("%d", &tuoi);
    printf("Nhap diem moi: ");
    scanf("%f", &diem);
    printf("Nhap ky tu: ");
    scanf(" %c", &kyTu); // có khoảng trắng trước %c

    // In kết quả sau nhập
    printf("\nThong tin vua nhap:\n");
    printf("Tuoi: %d, Diem: %.1f, Ky tu: %c\n", tuoi, diem, kyTu);

    // Hiển thị biến toàn cục và hằng số
    printf("\nBien toan cuc: %d\n", bienToanCuc);
    printf("Hang so PI: %.2f\n", PI);

    return 0;
}
