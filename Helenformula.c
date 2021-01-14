#include<stdio.h>
#include<math.h>//sqrt--开平方
int main()
{
    int a = 0, b = 0, c = 0;
    double zc = 0;
    double mz = 0;
    double p = 0;
    scanf("%d %d %d", &a, &b, &c);
    zc = a + b + c;
    p = zc / 2;
    mz = sqrt(p * (p - a) * (p - b) * (p - c));//海伦公式
    printf("circumference=%.2lf area=%.2lf", zc, mz);
    return 0;
}