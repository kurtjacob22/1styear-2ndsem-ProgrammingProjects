#include <iostream>
// #include <string>

using namespace std;

struct profile{
    int idNum;
    string fName;
    string lName;
    float gwa;
};

int main(){
    system("cls");
    
    int n = 2;
    profile prof[n];

    // prof[0] = {1001, "ace", "compton", 2.5};
    // prof[1] = {1002, "carl", "obama", 3.0};
    // prof[2] = {1003, "ben", "davis", 1.5};
    // prof[3] = {1004, "eric", "smith", 1.75};
    for(int i = 0; i < n; i++){
        
        cout << "Record " << i + 1 << endl;
        cout << "Student ID: \t"; cin >> prof[i].idNum;
        cout << "First Name: \t"; cin >> prof[i].fName;
        cout << "Last Name: \t"; cin >> prof[i].lName;
        cout << "GWA: \t"; cin >> prof[i].gwa;
        cout << endl;
    }

    cout << endl;
    for(int i = 0; i < n; i++){
        cout << prof[i].idNum<< "\t";
        cout << prof[i].fName << " ";
        cout << prof[i].lName << "\t";
        cout << prof[i].gwa << "\t\n";
    }
}