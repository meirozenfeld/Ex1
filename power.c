#include "myMath.h"
#define e 2.71828

double Exp (int x){
return Pow (e , x);
}

double Pow (double x , int y){
double ans=1;
for (int i = 0; i < y; i++)
{
    ans=x*ans;
}
return ans;
}