#include <stdio.h>

int main() {
    float code[5] = {4.00,4.50,5.00,2.00,1.50};
    int x,y;
    scanf("%d %d",&x,&y);

    float price = (float)code[x-1]*y;

    printf("Total: R$ %.2f\n",price);

    return 0;
}
