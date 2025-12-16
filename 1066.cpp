#include <iostream>
using namespace std;
 
int main() {
    int num[5], even = 0, odd = 0, positive = 0, negitive = 0;
    for(int i = 0; i < 5;i++){
        cin >> num[i];
        if(num[i]%2 == 0) even += 1;
        if(num[i]%2 != 0) odd += 1;
        if(num[i] > 0) positive += 1;
        if(num[i] < 0) negitive += 1;
    }
    cout << even << " valor(es) par(es)" << endl;
    cout << odd << " valor(es) impar(es)" << endl;
    cout << positive << " valor(es) positivo(s)" << endl;
    cout << negitive << " valor(es) negativo(s)" << endl;
    return 0;
}
