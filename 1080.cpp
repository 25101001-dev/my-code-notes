#include <iostream>
#include <climits>
using namespace std;
 
int main() {
    int a[100];
    int max = -100000000, position;
    for(int i = 0; i < 100; i++){
        cin >> a[i];
        if(a[i] > max){
            max = a[i];
            position = i+1;
        }
    }
    cout << max << endl;
    cout << position << endl;
    return 0;
}
