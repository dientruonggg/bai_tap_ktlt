	#include <stdio.h>
	#include <math.h>
	#define EPS 1e-6
	double a, b, c;
	void nhapdl(){
		printf("Nhap do dai ba canh cua tam giac: ");
	    scanf("%lf %lf %lf", &a, &b, &c);
	}
	int kiem_tra_tam_giac(double a, double b, double c) {
	    if (a <= 0 || b <= 0 || c <= 0) return 0;
		if (a + b <= c || a + c <= b || b + c <= a)return 0;
	    return 1;
	}
	void phan_loai_tam_giac(double a,double b,double c){
	        if (fabs(a - b)<=EPS && fabs(b - c)<=EPS) printf("Tam giac deu.\n");
	        else if (fabs(a - b) <=EPS || fabs(b - c)<=EPS || fabs(a - c)<EPS) printf("Tam giac can.\n");
	        else if (fabs(a*a + b*b - c*c)<=EPS ||fabs( a*a + c*c - b*b)<=EPS ||fabs( b*b + c*c - a*a)<=EPS) printf("Tam giac vuong.\n");
			else printf("Tam giac thuong.\n");
	}
	void xuly(){
		if (kiem_tra_tam_giac(a, b, c)) phan_loai_tam_giac(a,b,c);
	    else printf("Ba canh vua nhap khong tao thanh mot tam giac.\n");
	}
	int main() {
		nhapdl();
		xuly();
	    return 0;
	}
