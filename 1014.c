#include <stdio.h>
 
int main() {
 
    int a;
    double b,avg;
    
    scanf("%d",&a);
    scanf("%lf",&b);
    
    avg = a/b;
    
    printf("%.3lf km/l\n",avg);
 
    return 0;
}
