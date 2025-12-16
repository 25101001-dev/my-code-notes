#include <iostream>
#include <algorithm>
#include <functional>
#include <iomanip>
using namespace std;

int main() {
    double a, b, c;
    cin >> a >> b >> c;

    double sides[3] = {a, b, c};
    sort(sides, sides + 3, greater<double>());
    a = sides[0]; b = sides[1]; c = sides[2]; 
    
    if (a >= (b + c)) {
        cout << "NAO FORMA TRIANGULO" << endl;
    } else {

        if (a*a == b*b + c*c) {
            cout << "TRIANGULO RETANGULO" << endl;
        } else if (a*a > b*b + c*c) {
            cout << "TRIANGULO OBTUSANGULO" << endl;
        } else {
            cout << "TRIANGULO ACUTANGULO" << endl;
        }
        
        if (a == b && b == c) {
            cout << "TRIANGULO EQUILATERO" << endl;
        } else if (a == b || b == c || a == c) {
            cout << "TRIANGULO ISOSCELES" << endl;
        }
    }
    return 0;
}
