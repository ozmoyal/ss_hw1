#include <stdio.h>
#include "myMath.h"

int main(){ 
    double x;
    float ans1, ans2, ans3;
    printf("enter a real number :");
    scanf("%lf",&x);
    ans1 = sub(add(Exp(x),Pow(x,3)),2);
    ans2 = add(mul(x,3),mul(Pow(x,2),2));
    ans3 = sub(div(mul(Pow(x,3),4),5),mul(x,2));

    printf("f(x) = e^x+x^3−2 = %.3f\n", ans1);
    printf("f(x) = 3x+2X^2 = %.3f\n", ans2);
    printf("f(x) = (4x^3)/5-2x = %.3f\n", ans3);
return 0;
}