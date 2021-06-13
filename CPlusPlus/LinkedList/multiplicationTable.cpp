#include <iostream>

using namespace std;

int main(){

	int n, product = 0;

	cout << "Enter Number: ";
	cin >> n;

	for(int i = 1; i <= 10; i++){
		product = n * i;
		cout << n << " * " << i << " = " << product << endl;
	}
}