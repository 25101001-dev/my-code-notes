#include <stdio.h>
 
int main() {
 
    float a,b,c,d,avg,avg2,exam;
    scanf("%f %f %f %f",&a,&b,&c,&d);
    
    avg = (a*2+b*3+c*4+d*1)/10.0;
    
    printf("Media: %.1f\n",avg);
    
    if(avg>=7.0){
        printf("Aluno aprovado.\n");
    }
    else if(avg<5.0){
        printf("Aluno reprovado.\n");
    }
    else{
        printf("Aluno em exame.\n");
        scanf("%f",&exam);
        printf("Nota do exame: %.1f\n",exam);
    
    avg2 = (avg+exam)/2;
    
    if(avg2>5.0){
        printf("Aluno aprovado.\n");
    }
    else if(avg2<=4.9){
        printf("Aluno reprovado.\n");
    }
    printf("Media final: %.1f\n",avg2);
    }
 
    return 0;
}
