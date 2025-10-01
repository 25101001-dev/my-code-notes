#include <stdio.h>
 
int main() {
 
    int a,i,notes;
    int banknotes[] ={100, 50, 20, 10, 5, 2, 1};
    
    scanf("%d",&a);
    printf("%d",a);
    
    for(i = 0 ; i < 7 ; i++){
        notes = a / banknotes[i];
        a = a % banknotes[i];
        printf("%d nota(s) de R$ %d,00\n", notes, banknotes[i]);
    }
 
    return 0;
}
