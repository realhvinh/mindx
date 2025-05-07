#include <stdio.h>

// 1. Prototype các hàm
int tinhTong(int a, int b);
void inChao(char ten[]);
void tangGiaTri(int x);
float tinhDienTich(float r);
void kiemTraBanKinh(float r);

// 2. Biến toàn cục (hạn chế dùng)
int bienToanCuc = 100;

int main() {
    // Hàm trả về giá trị
    int x = 10, y = 5;
    int tong = tinhTong(x, y);
    printf("Tong %d + %d = %d\n", x, y, tong);

    // Hàm không trả về
    inChao("MindX");

    // Truyền tham trị
    int z = 7;
    tangGiaTri(z);
    printf("Gia tri z sau khi goi ham: %d\n", z); // z không đổi

    // Kiểm tra bán kính & tính diện tích
    float r;
    printf("Nhap ban kinh hinh tron: ");
    scanf("%f", &r);

    kiemTraBanKinh(r);
    if (r > 0) {
        float s = tinhDienTich(r);
        printf("Dien tich: %.2f\n", s);
    }

    // In biến toàn cục
    printf("Bien toan cuc = %d\n", bienToanCuc);

    return 0;
}

// 3. Hàm trả về giá trị
int tinhTong(int a, int b) {
    return a + b;
}

// 4. Hàm không trả về
void inChao(char ten[]) {
    printf("Xin chao %s!\n", ten);
}

// 5. Hàm minh họa truyền tham trị
void tangGiaTri(int x) {
    x = x + 10;
    printf("Gia tri trong ham tangGiaTri: %d\n", x);
}

// 6. Hàm kiểm tra giá trị
void kiemTraBanKinh(float r) {
    if (r > 0) {
        printf("Ban kinh hop le.\n");
    } else {
        printf("Ban kinh khong hop le.\n");
    }
}

// 7. Hàm tính diện tích hình tròn
float tinhDienTich(float r) {
    return 3.14 * r * r;
}

