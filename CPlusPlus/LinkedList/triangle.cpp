#include <iostream>

using namespace std;

int main(){
	int rows = 5;
	int n = 0;

	for(int i = 1; i <= rows; i++, n = 0){
		for(int j = 1; j <= rows - 1; j++){
			cout << "  ";
		}
		while(n != 2 * i - 1){
			cout << "* ";
			n++;
		}
		cout << endl;
	}

	
}