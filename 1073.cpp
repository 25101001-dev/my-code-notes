#include <iostream>
using namespace std;
 
int main() {
    int N;
    cin >> N;
    if(N > 5 && N < 2000){
        for(int i=2; i <= N ;i+=2){
            if(i%2==0){
                cout << i << "^2 = " << i*i << endl;
            }
        }
    }
    return 0;
}
