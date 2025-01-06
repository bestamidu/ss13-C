#include <stdio.h>

int ucln(int a, int b) {
    if (b == 0)
        return a;
    return ucln(b, a % b);
}

int main() {
    int num1, num2;

    printf("Nhập số thứ nhất: ");
    scanf("%d", &num1);
    printf("Nhập số thứ hai: ");
    scanf("%d", &num2);

    printf("Ước chung lớn nhất của %d và %d là: %d\n", num1, num2, ucln(num1, num2));
    
    return 0;
}
