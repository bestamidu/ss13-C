#include <stdio.h>
#define MAX_SIZE 100

int arr[MAX_SIZE];
int n = 0; 

void nhap_Mang() {
    printf("Nhap so phan tu trong khoang %d: ", MAX_SIZE);
    scanf("%d", &n);

    if (n > MAX_SIZE || n < 0) {
        printf("So phan tu khong hop le!\n");
        n = 0; 
        return;
    }

    for (int i = 0; i < n; i++) {
        printf("Nhap phan tu thu %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
}

void print() {
    printf("Cac phan tu trong mang la: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void them(int vitri, int giatri) {
    if (vitri < 0 || vitri > n || n >= MAX_SIZE) {
        printf("Vi tri chen khong hop le!\n");
        return;
    }

    for (int i = n - 1; i >= vitri; i--) {
        arr[i + 1] = arr[i];
    }
    arr[vitri] = giatri;
    n++;
}

void sua(int vitrisua, int giatrisua) {
    if (vitrisua < 0 || vitrisua >= n) {
        printf("Vi tri sua khong hop le!\n");
        return;
    }
    arr[vitrisua] = giatrisua;
}

void xoa(int vitri) {
    if (vitri < 0 || vitri >= n) {
        printf("Vi tri xoa khong hop le!\n");
        return;
    }

    for (int i = vitri; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }
    n--;
}

int main() {
    int vitri, giatri, vitrisua, vitrixoa,giatrisua, giatrixoa ;
    int choice;

    do {
        printf("\nMENU:\n");
        printf("1. Nhap mang\n2. In mang\n3. Them phan tu\n4. Sua phan tu\n5. Xoa phan tu\n6. Sap xep\n7. Tim kiem\n8. Thoat\n");
        printf("Chon chuc nang: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                nhap_Mang();
                break;
            case 2:
                print();
                break;
            case 3:
                printf("Nhap vi tri: ");
                scanf("%d", &vitri);
                printf("Nhap gia tri: ");
                scanf("%d", &giatri);
                them(vitri, giatri);
                break;
            case 4:
                printf("Nhap vi tri: ");
                scanf("%d", &vitrisua);
                printf("Nhap gia tri muon sua: ");
                scanf("%d", &giatrisua);
                sua(vitrisua, giatrisua);
                break;
            case 5:
                printf("Nhap vi tri can xoa: ");
                scanf("%d", &vitrixoa);
                xoa(vitrixoa);
                break;
          
            default:
                printf("Lua chon khong hop le!\n");
        }
    } while (choice != 8);

    return 0;
}