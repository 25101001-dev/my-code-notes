#include <stdio.h>

int main() {
    int a,b;
    double c,SALARY;
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%lf",&c);
   
    printf("NUMBER = %d\n",a);
    SALARY = b*c;
    printf("SALARY = U$ %.2lf\n", SALARY);
 
    return 0;
}
