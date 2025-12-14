#include <iostream>
#include <algorithm>
#include <functional>
using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;
    
    int original[3] = {a, b, c};
    
    int num[3] = {a, b, c};
    sort(num, num + 3, less<int>());
    
    for(int i = 0; i < 3; i++) {
        cout << num[i] << endl;
    }
    cout << endl;
    
    for(int i = 0; i < 3; i++) {
        cout << original[i] << endl;
    }
    return 0;
}
