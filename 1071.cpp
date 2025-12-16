#include <iostream>
using namespace std;
 
int main() {
    int x,y,sum = 0;
    cin >> x >> y;
    int low = x < y ? x : y;
    int high = x > y ? x : y;
    
    for(int i = low + 1; i < high; i++){
        if(i%2 != 0) {
            sum += i;
        }
    }
    cout << sum << endl;
    return 0;
}
