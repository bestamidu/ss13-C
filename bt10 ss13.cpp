#include <iostream>
using namespace std;

const int MAX_SIZE = 100;

void nhapMang(int arr[], int &n) {
    cout << "Nhap so phan tu (0 < n <= 100): ";
    cin >> n;
    if (n <= 0 || n > MAX_SIZE) {
        cout << "So phan tu khong hop le!\n";
        return;
    }
    cout << "Nhap cac phan tu:\n";
    for (int i = 0; i < n; i++) {
        cout << "arr[" << i << "] = ";
        cin >> arr[i];
    }
}

void xuatMang(int arr[], int n) {
    cout << "Cac phan tu trong mang:\n";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

// Các hàm thực hiện các chức năng còn lại
// ... (Sẽ được bổ sung ở phần dưới)

int main() {
    int arr[MAX_SIZE];
    int n = 0;
    int choice;

    do {
        cout << "\nMENU\n";
        cout << "1. Nhap so phan tu va gia tri cac phan tu\n";
        cout << "2. In ra gia tri cac phan tu\n";
        cout << "3. Them mot phan tu\n";
        cout << "4. Sua mot phan tu\n";
        cout << "5. Xoa mot phan tu\n";
        cout << "6. Sap xep cac phan tu\n";
        cout << "7. Tim kiem phan tu\n";
        cout << "8. Thoat\n";
        cout << "Nhap lua chon cua ban: ";
        cin >> choice;

        switch (choice) {
            case 1:
                nhapMang(arr, n);
                break;
            case 2:
                xuatMang(arr, n);
                break;
            // Các case còn lại tương ứng với các hàm thực hiện chức năng
            // ...
            default:
                cout << "Lua chon khong hop le!\n";
        }
    } while (choice != 8);

    return 0;
}