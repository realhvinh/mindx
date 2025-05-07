#include <stdio.h>

// Hàm tìm kiếm tuyến tính
int linearSearch(int arr[], int n, int x) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == x) {
            return i; // Trả về vị trí nếu tìm thấy
        }
    }
    return -1; // Không tìm thấy
}

// Hàm sắp xếp nổi bọt (bubble sort)
void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                // Hoán đổi nếu sai thứ tự
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

// Hàm in mảng
void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int arr[] = {34, 12, 5, 22, 64};
    int n = sizeof(arr) / sizeof(arr[0]);
    int x;

    printf("Mang ban dau: ");
    printArray(arr, n);

    // Sắp xếp mảng
    bubbleSort(arr, n);
    printf("Mang sau khi sap xep: ");
    printArray(arr, n);

    // Tìm kiếm phần tử
    printf("Nhap gia tri can tim: ");
    scanf("%d", &x);
    int result = linearSearch(arr, n, x);

    if (result != -1) {
        printf("Tim thay %d tai chi so %d\n", x, result);
    } else {
        printf("Khong tim thay %d trong mang.\n", x);
    }

    return 0;
}
