#include <stdio.h>
void bang_cuu_chuong(){
	for (int i = 1; i <= 10; i++) {
        for (int j = 2; j <= 10; j++) {
            printf("\033[%dm%d x %d = %d\t\033[0m", 31 + (j % 6), j, i, j * i); // su dung mau tu 31 den 36
        }
        printf("\n");
    }
}
int main() {
    bang_cuu_chuong();
    return 0;
}

