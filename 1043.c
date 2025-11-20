#include <stdio.h>
 
int main() {
 
    float a,b,c;
    scanf("%f %f %f",&a,&b,&c);
    float area = (a+b)*c*0.5;
    if(a+b>c && b+c>a && c+a>b){
        printf("Perimetro = %.1f\n",a+b+c);
    }
    else{
        printf("Area = %.1f\n",area);
    }
    return 0;
}
