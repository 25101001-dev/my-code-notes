#include <stdio.h>
 
int main() {
    
    int r;
    double const pi = 3.14159;
    double VOLUME;
 
    scanf("%d",&r);
    VOLUME = (4.0/3.0)*pi*r*r*r;
    
    printf("VOLUME = %.3lf\n",VOLUME);
 
    return 0;
}
