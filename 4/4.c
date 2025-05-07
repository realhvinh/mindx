#include <stdio.h>

int main() {
    int tuoi, diem, chon;
    char ketQua[20];

    // if + if-else
    printf("Nhap tuoi: ");
    scanf("%d", &tuoi);

    if (tuoi >= 18) {
        printf("Ban du tuoi lai xe!\n");
    } else {
        printf("Ban chua du tuoi lai xe!\n");
    }

    // if - else if - else
    printf("\nNhap diem (0-10): ");
    scanf("%d", &diem);

    if (diem >= 9) {
        printf("Xep loai: Xuat sac\n");
    } else if (diem >= 7) {
        printf("Xep loai: Gioi\n");
    } else if (diem >= 5) {
        printf("Xep loai: Trung binh\n");
    } else {
        printf("Xep loai: Yeu\n");
    }

    // Toán tử 3 ngôi (ternary)
    printf("\nToi co du tuoi bo phieu? %s\n", (tuoi >= 18) ? "Co" : "Khong");

    // switch-case
    printf("\nNhap ngay trong tuan (1-7): ");
    scanf("%d", &chon);

    switch (chon) {
        case 1:
            printf("Thu Hai\n");
            break;
        case 2:
            printf("Thu Ba\n");
            break;
        case 3:
            printf("Thu Tu\n");
            break;
        case 4:
            printf("Thu Nam\n");
            break;
        case 5:
            printf("Thu Sau\n");
            break;
        case 6:
            printf("Thu Bay\n");
            break;
        case 7:
            printf("Chu Nhat\n");
            break;
        default:
            printf("Ngay khong hop le!\n");
    }

    return 0;
}
