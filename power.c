#include "myMath.h"

double Exp(int x){
    double e = 2.71828182846;
    double ans = 1;
    if (x == 0) return 1;

    if(x < 0) {
        for (int i = x; i < 0; i++)
        {
        ans = ans*e;
        }
    return 1/ans;
    }

    for (int i = 0; i < x; i++)
    {
        ans = ans*e;
    }
    return ans;
}

double Pow(double x , int y){
    double ans = 1;
    if(y == 0) return 1;

    if(y < 0){
    for (int i = y; i < 0; i++)
    {
        ans = ans*x;
    }
    return 1/ans; 
    }

    for (int i = 0; i < y; i++)
    {
        ans = ans*x;
    }
    return ans;
}