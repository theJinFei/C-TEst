#include <iostream>
#include <stdio.h>
#include <cmath>
using namespace std;

int main()
{
    double r1, p1, r2, p2;
    scanf("%lf %lf %lf %lf", &r1, &p1, &r2, &p2);
    double a = r1 * r2 * cos(p1 + p2);
    double b = r1 * r2 * sin(p1 + p2);
    if(a > -0.005 && a < 0.005){ //a = 0
        printf("0.00");
    }
    else{
        printf("%.2f", a);
    }
    if(b > -0.005 && b < 0.005){ //b = 0
        printf("+0.00i\n"); //这里别忘记+0.00i好坑
    }
    else if(b > 0){
        printf("+%.2fi\n", b);
    }
    else if(b < 0){
        printf("%.2fi\n", b);
    }
    return 0;
}
