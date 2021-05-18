#include <iostream>

using namespace std;

void getTable(struct record rec[], int n);
void showTable(struct record rec[], int n);

struct record{
    int idNum;
    string fName;
    string lName;
    float gwa; 
};

int main(){
    int n = 2;
    struct record studRec[n];
    getTable(studRec, n);
    showTable(studRec, n);
}

void getTable(struct record rec[], int n){
    for(int i = 0; i < n; i++){
        cout << "Record " << i + 1 << endl;
        cout << "Student ID: \t"; cin >> rec[i].idNum;
        cout << "First Name: \t"; cin >> rec[i].fName;
        cout << "Last Name: \t"; cin >> rec[i].lName;
        cout << "GWA: \t"; cin >> rec[i].gwa;
        cout << endl;
    }
}

void showTable(struct record rec[], int n){
    for(int i = 0; i < n; i++){
        cout << rec[i].idNum<< "\t";
        cout << rec[i].fName << " ";
        cout << rec[i].lName << "\t";
        cout << rec[i].gwa << "\t\n";
    }
}