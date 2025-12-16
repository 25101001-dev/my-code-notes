#include <stdio.h>
 
int main() {
    double a1,b1,a2,b2,distance,c,d;
    
    scanf("%lf %lf",&a1,&b1);
    scanf("%lf %lf",&a2,&b2);
    c = pow(a2-a1, 2);
    d = pow(b2-b1, 2);
    distance = sqrt(c+d);
    
    printf("%.4lf\n",distance);
 
    return 0;
}
