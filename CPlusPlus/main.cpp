#include <iostream>

using namespace std;

int main(){
    for(char i = '1'; i <= '5'; i++){
        for(int j = '1'; j <= i; j++){
            cout << i << " ";
        }
        cout << endl;
    }
}