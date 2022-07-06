#include <stdio.h>
#define _USE_MATH_DEFINES // for C
#include <math.h>

double fx(double A, double B, double x){
    return A * sin(M_PI*x/B);
}

int main() {
    double a, b, A, B, dx, sum;
    double x1,x2,y1,y2,dA;
    int n;
    scanf("%lf %lf %lf %lf %i", &a, &b, &A, &B, &n);
    // printf("%lf %lf %lf %lf %i", a, b, A, B, n);
    dx = (b-a)/n;
    sum = 0;
    for(int i = 0; i < n; i += 1){
        x1 = a + i*dx;
        x2 = a + (i+1)*dx;
        y1 = fx(A, B, x1);
        y2 = fx(A, B, x2);
        dA = (y1 + y2) * dx /2;
        sum += dA;
    }
    printf("%.5f", sum);
    return 0;
}

