#include <stdio.h>
#include <iostream>

using namespace std;

int main(){
	int arr[] = {4,4,-2,3,-6,10};
	int checkIfAlternate = 0; // 1 if true

	// for(int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++ ){
	// 	if(arr[i] >= 0){
	// 		checkIfAlternate += 1;
	// 	}else{
	// 		checkIfAlternate -= 1;
	// 	}
	// }
	// // printf("%d", checkIfAlternate);
	// if(sizeof(arr) / sizeof(arr[0]) % 2 == 0){
	// 	if(checkIfAlternate == 0){
	// 		printf("True");
	// 	}else{
	// 		printf("False");
	// 	}
	// }else{
	// 	if(checkIfAlternate == 1 || checkIfAlternate == -1){
	// 		printf("True");
	// 	}else{
	// 		printf("False");
	// 	}
	// }

	cout << sizeof(arr) << endl;
	cout << sizeof(arr[0]) << endl;
	cout << sizeof(arr) / sizeof(arr[0]);
	// int arr[] = {4, 4, -2, 3, -6, 10};
	// 			 4  4   4  4   4  4     = 24 bytes
	// 			 1  1   1  1   1  1     = 6 elements
}