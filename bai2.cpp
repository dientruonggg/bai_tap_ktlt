#include <stdio.h>

unsigned long long fibonacci(int n) {
    if (n <= 1)
        return n;
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    int n;
    printf("Nhap so n: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("n phai la so khong am\n");
        return 1;
    }
    
    int i = 1;
    unsigned long long fib;
    while ((fib = fibonacci(i)) < n) {
        printf("%llu ", fib);
        i++;
    }

    return 0;
}
-
