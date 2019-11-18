#include "myMath.h"
#include <stdio.h>


double f1(double x){
double a = Exp(x);
double b = Pow (x,3);
double c = add(a,b);
double ans = sub (c, 2);
return ans;
}

double f2(double x){
double a = mul(x,3);
double b = Pow(x,2);   
double c = mul(2,b);
double ans = add(a,c);
return ans;
}

double f3( double x){
double a = Pow(x,3);
double b = mul(4,a);
double c = div(b,5);
double d = mul(2,x);
double ans = sub(c,d);
return ans;
}

int main () { 
double x;
printf( "Please inset a real number: \n");
scanf("%lf", &x);
double a= f1(x);
double b= f2(x);
double c= f3(x);
printf("The value of f(𝑥) = 𝑒^𝑥 + 𝑥^3 − 2 at the point %0.4f is: %0.4f \n ", x, a);
printf("The value of f(𝑥) = 3x + 2x^2  at the point %0.4f is: %0.4f \n ", x, b);
printf("The value of f(𝑥) = (4x^3)/5 - 2x  at the point %0.4f is: %0.4f \n ", x, c);
return 0;
}