#include <iostream>
#include <cstdlib>

using namespace std;

int GetNumOfTerms();
void GetCoeff(int terms[], int n);
void DisplayEq(int terms[], int n);
void GetSum(int term[], int n, int term2[], int n2, int ans[]);

int main(){
    system("cls");

    cout << "Computing the Sum of 2 Equations with max of 5 terms each: \n\n";

    int eq1[5] = {0, 0, 0, 0, 0};	//init all terms to zero
	int eq2[5] = {0, 0, 0, 0, 0};	//init all terms to zero
    int eq3[5] = {0, 0, 0, 0, 0};

    cout << "How many terms for Eq1 (range 1..5)? ";
	int n1 = GetNumOfTerms();	//input num of terms for eq1
    cout << "How many terms for Eq2 (range 1..5)? ";
	int n2 = GetNumOfTerms();	//input num of terms for eq2
    int n3 = 5;

    cout << "Enter the coefficients of Eq1 in ascending term seq: ";
	GetCoeff(eq1, n1);		//input eq1 coeff in ascending term seq
    cout << "Enter the coefficients of Eq2 in ascending term seq: ";
	GetCoeff(eq2, n2);		//input eq1 coeff in ascending term seq

	cout<< endl << "SOLUTION:";
    cout << "\nEq1: ";
	DisplayEq(eq1, n1);		//display eq1 in descending term seq
    cout << "\nEq2: ";
	DisplayEq(eq2, n2);		//display eq2 in descending term seq
	GetSum(eq1, n1, eq2, n2, eq3);	//compute: eq3 = eq1 + eq2
    cout << "\nSum: ";
	DisplayEq(eq3, n3);		//display eq3 in descending term seq
}

int GetNumOfTerms(){
    // * returns the number of terms 
    int n;
    do{
        cin >> n;
    }while(n > 5 || n < 1); // limits the terms into 0 - 5
    return n;
}

void GetCoeff(int terms[], int n){
    /*
        * function for inserting coefficients to array
        * int terms[] --> placeholder
        * int n --> number of terms 
    */
    
    for(int i = 0; i < n; i++){
        cin >> terms[i];
    }
}

void DisplayEq(int terms[], int n){
    /* 
        * displays the equation --> descending term sequence
        * int terms[] --> placeholder
        * int n --> number of terms
    */

    for(int i = n - 1; i >= 0; i--){
        if(terms[i] != 0){ // check if the coefficient is not 0
            if(i != 0){ // [1 - 4]
                // ! prints the coefficient 
                if(terms[i] == 1 || terms[i] == -1){
                    cout << "x";
                }else{
                    if(i == n - 1){
                        cout << terms[i] << "x";
                    }else{
                        cout << abs(terms[i]) << "x";
                    }
                }
                // ! deals whether if the exponent should be visible or not
                if(i > 1){
                    cout << "^" << i << " ";
                }else {
                    cout << " ";
                }
                // ! assigns the operation --> positive or negative
                if(terms[i - 1] > 0){
                    cout << "+ ";
                }else if(terms[i - 1] < 0){
                    cout << "- ";
                }
            }else{ // [0]
                cout << abs(terms[i]);
            }
        }
    }
}

void GetSum(int term[], int n, int term2[], int n2, int ans[]){
    /* 
        * computes --> ans[] = eq1 + eq2 
        * int term[] --> first term with values
        * int n --> number of terms for term[]
        * int term2[] --> second term with values
        * int n2 --> number of terms for term2[]
        * int ans[] --> placeholder for eq1 + eq2 
    */
    for(int i = 0; i < 5; i++){
        ans[i] = term2[i] + term[i];
    }
}
