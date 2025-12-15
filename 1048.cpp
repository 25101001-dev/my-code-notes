#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double a, rate;
    cin >> a;

    if (a >= 0.00 && a <= 400.00) {
        rate = 0.15;
    } else if (a <= 800.00) { 
        rate = 0.12;
    } else if (a <= 1200.00) { 
        rate = 0.10;
    } else if (a <= 2000.00) { 
        rate = 0.07;
    } else {
        rate = 0.04;
    }

    double extra = rate * a;
    double salary = a + extra;
    int perc = static_cast<int>(rate * 100);

    cout << fixed << setprecision(2);
    cout << "Novo salario: " << salary << endl;
    cout << "Reajuste ganho: " << extra << endl;
    cout.unsetf(ios::fixed);    
    cout << "Em percentual: " << perc << " %" << endl;

    return 0;
}
