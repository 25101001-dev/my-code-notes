#include <iostream>
using namespace std;
 
int main() {
    int num[5], even = 0;
    for(int i = 0; i < 5;i++){
        cin >> num[i];
        if(num[i]%2==0){
            even+=1;
        }
    }
    cout << even << " valores pares" << endl;
    return 0;
}
