#include <iostream>
#include <iomanip>
using namespace std;
int main() {
    int n;
    float x, y, z;
    cin >> n;
    
    for(int i=0; i < n; i++){
        cin >> x >> y >> z;
        float weighted = (x*2 + y*3 + z*5) / 10.0;
        cout << fixed << setprecision(1) << weighted << endl;
    }
    return 0;
}
