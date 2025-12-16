#include <iostream>
using namespace std;

int main() {
    int i_h, i_m, f_h, f_m, duration;
    cin >> i_h >> i_m >> f_h >> f_m;

    int total_start = i_h*60 + i_m;
    int total_end = f_h*60 + f_m;
    
    if(total_start < total_end){ 
        duration = total_end - total_start;
    }
    else {
        duration = 24*60 - total_start + total_end;
    }
    
    int hour = duration / 60;
    int min = duration % 60;
    
    cout << "O JOGO DUROU " << hour << " HORA(S) E " << min << " MINUTO(S)" << endl;
    return 0;
}
