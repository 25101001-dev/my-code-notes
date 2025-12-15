#include <iostream>
#include <string>
using namespace std;
 
int main() {
 
    string word[3];
    for(int i = 0; i < 3; i++) {
        cin >> word[i];
    }
    if(word[0]=="vertebrado"){
        if(word[1]=="ave"){
            if(word[2]=="carnivoro"){
                cout << "aguia" << endl;
            }
            else{
                cout << "pomba" << endl;
            }
        }
        else{
            if(word[2]=="onivoro"){
                cout << "homem" << endl;
            }
            else{
                cout << "vaca" << endl;

            }
        }
    }
    else{
        if(word[1]=="inseto"){
            if(word[2]=="hematofago"){
                cout << "pulga" << endl;
            }
            else{
                cout << "lagarta" << endl;
            }
        }
        else{
            if(word[2]=="hematofago"){
                cout << "sanguessuga" << endl;
            }
            else{
                cout << "minhoca" << endl;

            }
        }
    }
    return 0;
}
