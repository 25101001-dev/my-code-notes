#include <stdio.h>
 
int main() {
    int a,b;
    scanf("%d %d",&a,&b);
    int c = b%a;
    int d = a%b;
    if(c == 0 || d == 0){
        printf("Sao Multiplos\n");
    }
    else{
        printf("Nao sao Multiplos\n");
    }
 
    return 0;
}
