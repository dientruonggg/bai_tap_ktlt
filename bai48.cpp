#include <stdio.h>
#include <math.h>
const double pi = 3.14159265359;
long long factorial(int n) {
    long long g_t = 1;
    for (int i = 1; i <= n; i++) {
        g_t = g_t * i;
    }
    return g_t;
}
double cos_bai48(double x) {
    double s = 1.0;
    double term;
    int i = 1;
    do {
        term = pow(-1, i) * pow(x, 2 * i) / factorial(2 * i);
        s += term;
        i++;
    } while (fabs(term) >= 0.000001);  
    return s;
}
int main() {
    unsigned int x;
    printf("Nhap x (do): ");
    scanf("%u", &x);
    double radians = x * pi / 180.0;
    printf("cos(%u) = %lf\n", x, cos_bai48(radians));
    return 0;
}

