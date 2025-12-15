#include <iostream>
#include <iomanip>
using namespace std;
 
int main() {
    float num[6],avg = 0;
    int positive = 0;
    for(int i=0; i < 6 ; i++){
        cin >> num[i];
        if(num[i]>0){
            positive += 1;
            avg += num[i];
        }
    }
    avg = avg / positive;
    cout << positive << " valores positivos" << endl;
    cout << fixed << setprecision(1);
    cout << avg << endl;
    return 0;
}
