#include <iostream>
using namespace std;
 
int main() {
    int n;
    cin >> n;
    int x[10000];
    for(int i = 0; i < n; i++){
        cin >> x[i];
        if (x[i] == 0) cout << "NULL" << endl;
        else if(x[i]%2 != 0){
            cout << "ODD ";
            if(x[i]>0) cout << "POSITIVE" << endl;
            else cout << "NEGATIVE" << endl;
        }
        else{
            cout << "EVEN ";
            if(x[i]>0) cout << "POSITIVE" << endl;
            else cout << "NEGATIVE" << endl;
        }
    }
    return 0;
}
