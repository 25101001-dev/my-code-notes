#include <stdio.h>
 
int main() {
    int a1,b1,a2,b2;
    double c1,c2,TOTAL ;
    
    scanf("%d",&a1);
    scanf("%d",&b1);
    scanf("%lf",&c1);
    scanf("%d",&a2);
    scanf("%d",&b2);
    scanf("%lf",&c2);
   
    TOTAL = b1*c1 + b2*c2;
    printf("VALOR A PAGAR: R$ %.2lf\n", TOTAL);
 
    return 0;
}
