#include <iostream>
using namespace std;
 
int main() {
    int n, in = 0, out = 0;
    cin >> n;
    int x[10000];
    for(int i = 0; i < n; i++){
        cin >> x[i];
        if(x[i]>=10 && x[i]<=20){
             in+=1;
        }
        else{
             out+=1;
        }
    }
    cout << in << " in" << endl;
    cout << out << " out" << endl;
    return 0;
}
