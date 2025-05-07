#include <stdio.h>      // Chỉ thị tiền xử lý: thư viện nhập/xuất
#define MAX_AGE 100     // Định nghĩa hằng số (macro)

int main() {            // Hàm main: điểm bắt đầu của chương trình

    // Khai báo biến
    int tuoi;
    float diem;
    char ten[50];

    // In hướng dẫn cho người dùng (câu lệnh xuất)
    printf("Nhap ten cua ban: ");
    scanf("%s", ten);  // Nhập chuỗi (câu lệnh nhập)

    printf("Nhap tuoi (0-%d): ", MAX_AGE);
    scanf("%d", &tuoi);

    printf("Nhap diem trung binh (0-10): ");
    scanf("%f", &diem);

    // Câu lệnh điều kiện
    if (tuoi >= 18 && diem >= 7.0) {
        printf("Xin chao %s, ban du dieu kien tot nghiep!\n", ten);
    } else if (tuoi >= 18 && diem < 7.0) {
        printf("Xin chao %s, ban can co gang hon nua!\n", ten);
    } else {
        printf("Xin chao %s, ban chua du tuoi tot nghiep.\n", ten);
    }

    // Chú thích:
    // Đây là một chương trình C mẫu sử dụng:
    // - Chỉ thị tiền xử lý
    // - Hàm main
    // - Biến, nhập xuất, điều kiện
    // - Macro định nghĩa
    // - Chú thích dòng và nhiều dòng

    return 0;  // Kết thúc chương trình
}
