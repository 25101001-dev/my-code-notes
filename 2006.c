#include <stdio.h>

int main() {
    int t, guess[5], i, count = 0;

    scanf("%d", &t);

    for (i = 0; i < 5; i++) {
        scanf("%d", &guess[i]);
        if (guess[i] == t)
            count++;
    }
    printf("%d\n", count);

    return 0;
}
