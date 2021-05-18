#include <iostream>

using namespace std;

int main(){
    system("cls");
    int i = 10;
    
    cout << "value of i\t:\t"<< i << endl; // prints 10
    cout << "address of &i\t:\t"<< &i << endl; // prints the adress of i --> hexadecimal

    int *p; // declaring p as pointer
    p = &i; // points to the address of i

    cout << "value of p\t:\t"<< p << endl; // prints the address of i
    cout << "value at *p\t:\t"<< *p << endl; // prints the value of i since p points to the address of i --> *p points to the value of i as well

    *p = 3; // assings '3' to the pointer p, i variable will also be modified since var p points to the address of i
    cout << "value at *p\t:\t"<< *p << endl; // prints 3
    cout << "value of i\t:\t"<< i << endl; // prints 3

    // error will occur if the pointer does not point to any address --> see line 13
    // but we can do this: 

    int *q;
    q = 0; // not pointing to anything
    q = NULL; // same with above --> not pointing to anything
    cout << "value of q\t:\t"<< q << endl; // prints the 0 which is the address or compiler error
    // cout << "value at q\t:\t"<< *q << endl; // prints blank or compiler error

    // arrays can also be declared as pointerss
    
    int a[3] = {1, 2, 3}; // initialized a normal array with 3 elements --> arrays are considered or treated as indirect pointer
    int *p2 = a; // --> *p2 points only to the first element and not to the array as a whole
    
    cout << "value of *p2\t:\t"<< *p2 << endl; // prints the value of the first element
    
    *p2 = 5; // it only assigns 5 to the first element
    cout << "value of a[0]\t:\t"<< a[0] << endl; // prints the new value of the first element in the array

}