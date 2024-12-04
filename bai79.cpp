#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void nhap(int a[100][100], int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &a[i][j]);
        }
    }
}

void xuat(int a[100][100], int n) {
    printf("Ma tran A:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
}

void swap(int a[100][100], int i, int max) {
    int temp = a[i][i];
    a[i][i] = a[i][max];
    a[i][max] = temp;
}

void sort_matrix(int a[100][100], int n) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        int max = i;
        for (int j = 0; j < n; j++) {
            if (a[i][j] > a[i][max]) {
                max = j;
            }
        }
        if (i != max) {
            swap(a, i, max);
        }
        sum += a[i][i];
    }
    printf("Cau (b): doi ma tran thanh:\n");
    xuat(a, n);
    printf("Tong cua cac phan tu lon nhat tren duong cheo la: %d\n", sum);
}

int run_a() {
    int n;
    int a[100][100];
    printf("Nhap kich thuoc ma tran: ");
    scanf("%d", &n);
    if (n <= 0 || n > 100) {
        printf("Kich thuoc n phai nam trong khoang [1, 100]!\n");
        return 1;
    }
    nhap(a, n);
    xuat(a, n);
    sort_matrix(a, n);
    return 0; 
}

int main() {
    srand(time(0)); 
    run_a();
    return 0;
}

