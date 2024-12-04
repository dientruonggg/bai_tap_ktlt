#include <stdio.h>
#include <math.h>
void ptbac4(double a, double b, double c){
    if (a == 0) {
        printf("Khong phai phuong trinh bac bon trung phuong\n");
        return;
    }
    long double delta = b * b - 4 * a * c;
    int count = 0;
	
    if (delta < 0) {
        printf("Vo nghiem\n");
    } else if (delta == 0) {
        float y = -b / (2 * a);
        if (y >= 0) {
            float x1 = sqrt(y), x2 = -sqrt(y);
            count += (x1 == x2) ? 1 : 2;
            if (count==1){
            	printf("Co nghiem: x = %.2f\n", count, x1);
			} else if (count==2){
				printf("Co nghiem: x = %.2f\nCo nghiem: x = %.2f\n", count, x1, x2);
			}
			printf(count == 0 ? "Vo nghiem\n" : "Co %d nghiem khac nhau\n", count);
        } else {
            printf("Vo nghiem\n");
        }
    } else {
        float y1 = (-b + sqrt(delta)) / (2 * a);
        float y2 = (-b - sqrt(delta)) / (2 * a);
        if (y1 >= 0) {
            float x1 = sqrt(y1), x2 = -sqrt(y1);
            count += (x1 == x2) ? 1 : 2;
            if (count==1){
            	printf("Co nghiem: x = %.2f\n", x1);
			} else{
				printf("Co nghiem: x = %.2f\nCo nghiem: x = %.2f\n", x1, x2);
			}
        }
        if (y2 >= 0) {
            float x3 = sqrt(y2), x4 = -sqrt(y2);
            count += (x3 == x4) ? 1 : 2;
            if (count==1){
            	printf("Co nghiem: x = %.2f\n", x3);
			} else{
				printf("Co nghiem: x = %.2f\nCo nghiem: x = %.2f\n", x3, x4);
			}
        }
        printf(count == 0 ? "Vo nghiem\n" : "Co %d nghiem khac nhau\n", count);
    }
}
int main() {
    double a, b, c;
    printf("Nhap he so a, b, c: ");
    scanf("%lf %lf %lf", &a, &b, &c);
    ptbac4(a,b,c);
    return 0;
}
