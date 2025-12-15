#include <iostream>
using namespace std;
 
int main() {
    float num[6];
    int positive = 0;
    for(int i=0; i < 6 ; i++){
        cin >> num[i];
        if(num[i]>0){
            positive += 1;
        }
    }
    cout << positive << " valores positivos" << endl;
    return 0;
}
