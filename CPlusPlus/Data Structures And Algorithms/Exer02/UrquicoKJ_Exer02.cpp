#include <iostream>

using namespace std;

void displayTable(struct studRec stud[], int n);
void inputRating(struct studRec stud[], int n);

struct studRec{
    string idNum;
    string cCode;
    int mRating;
    int fRating;
    float fGrade;
};

int main(){
    system("cls");
    int n = 5; // number of elements --> structure
    struct studRec record[n]; // --> initialize structure
    // storing values for the structure
    record[0] = {"2020-1001", "CSC111", 0, 0, 0.00};
    record[1] = {"2020-1002", "CSC112", 0, 0, 0.00};
    record[2] = {"2020-1003", "CSC113", 0, 0, 0.00};
    record[3] = {"2020-1004", "CSC114", 0, 0, 0.00};
    record[4] = {"2020-1005", "CSC115", 0, 0, 0.00};

    displayTable(record, n);
    inputRating(record, n);
    displayTable(record, n);

    
}

void displayTable(struct studRec stud[], int n){
    cout << "\n#\tStudent ID\tClass Code\tMidterm Rating\tFinal Rating\tFinal Grade" << endl << endl; // header of the table
    for(int i = 0; i < n; i++){ // loop through [0, 1, 2, 3, 4]
        // if(i = 0){ // print only once at the start of the loop
        //     
        // }
        cout << i + 1; // number
        cout << "\t" << stud[i].idNum;
        cout << "\t" << stud[i].cCode;
        cout << "\t\t" << stud[i].mRating;
        cout << "\t\t" << stud[i].fRating;
        stud[i].fGrade = (stud[i].mRating + stud[i].fRating) / 2;
        printf("\t\t%.2f", stud[i].fGrade);
        cout << endl;
    }
}

void inputRating(struct studRec stud[], int n){
    cout << "\nFor Each Class, Enter the Midterm Rating, Final Rating(seperated by space)" << endl;
    for(int i = 0; i < n; i++){
        
        
        do{
            cout << stud[i].cCode << ":\t";
            cin >> stud[i].mRating;
            cin >> stud[i].fRating;
        }while((stud[i].mRating <= 70 || stud[i].mRating >= 100) ||
                (stud[i].fRating <= 70 || stud[i].fRating >= 100));
        
    }   
}