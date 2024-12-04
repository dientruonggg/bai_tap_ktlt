#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int compare(const void *a, const void *b) {
    return (*(int *)a - *(int *)b);
}
int main() {
    int a[1000], b[1000];
    int n, m;
    printf("So phan tu mang a: ");
    scanf("%d", &n);
    printf("Nhap cac phan tu mang a: ");
    for (int i = 0; i < n; i++) {
        scanf(" %d", &a[i]);                                                          
    }
    printf("So phan tu mang b: ");
    scanf("%d", &m);
    printf("Nhap cac phan tu mang b: ");
    for (int i = 0; i < m; i++) {
        scanf(" %d", &b[i]);
    }
    printf("Mang a: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");
    printf("Mang b: ");
    for (int i = 0; i < m; i++) {
        printf("%d ", b[i]);
    }
    printf("\n");
    for (int i = 0; i < m; i++) {
        a[n + i] = b[i];
    }
    qsort(a,n+m,sizeof(a[0]),compare);
    printf("Mang sau khi gop: ");
    for (int i = 0; i < n + m; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");

    return 0;
}

