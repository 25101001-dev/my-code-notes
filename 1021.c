#include <stdio.h>

int main() {
    float n;
    int i, j, note, coin;
    scanf("%f", &n);

    int banknote[10] = {100, 50, 20, 10, 5, 2};
    int bankcoin[10] = {100, 50, 25, 10, 5, 1};

    printf("NOTAS:\n");
    for (i = 0; i < 6; i++) {
        note = n / banknote[i];
        n = n - note * banknote[i];
        printf("%d nota(s) de R$ %d.00\n", note, banknote[i]);
    }

    int cent = (int)(n * 100 + 0.5);

    printf("MOEDAS:\n");
    for (j = 0; j < 6; j++) {
        coin = cent / bankcoin[j];
        cent = cent % bankcoin[j];
        printf("%d moeda(s) de R$ %.2f\n", coin, bankcoin[j] / 100.0);
    }

    return 0;
}
