#include <iostream>

using namespace std;

int n, total = 0;
void enterN();
void sum(int n);
void display(int total);

int main(){
    enterN();
    sum(n);
    display(total);
}

void enterN(){
    cout << "Enter n: ";
    cin >> n;
}

void sum(int n){
    for(int i = 0; i <= n; i++){
        total += i;
    }
}

void display(int total){
    cout << total << endl;
}