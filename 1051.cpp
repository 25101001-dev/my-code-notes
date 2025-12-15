#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    float salary, tax;
    cin >> salary;
    
    if (salary <= 2000.00) {
        cout << "Isento" << endl;
    }
    else if(salary <= 3000){  
        tax = (salary - 2000) * 0.08;
        cout << fixed << setprecision(2);
        cout << "R$ " << tax << endl;
    }
    else if(salary <= 4500){  
        tax = (salary - 3000) * 0.18 + 80;
        cout << fixed << setprecision(2);
        cout << "R$ " << tax << endl;
    }
    else{ 
        tax = (salary - 4500) * 0.28 + 270;
        cout << fixed << setprecision(2);
        cout << "R$ " << tax << endl;
    }
    return 0;
}
