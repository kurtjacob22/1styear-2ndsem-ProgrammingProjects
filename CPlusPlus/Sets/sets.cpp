#include <iostream>

using namespace std;

// hihingi ng numbers for set a
// > mapupunta sa unang array
// > yung unang array maii store sa union set

// hihingi ng numbers for set b
// > mapupunta sa pangalawang array
// > yung pangalawang array madadagdag sa union set

// **** Yung union set ngayon hawak na niya lahat ng elements

// ia-arrange from lowest to highest yung union set

// hahanapin duplicate/s sa union set and ica cancel, at the same time ii-store sa intersection set yung mga duplicates na nadetect

// ****Yung union set natin ngayon nakalowest to highest na and wala ng duplicate/s

// ngayon naman same process for intersection set
// > hahanapin yung duplicate number/s don tapos ika cancel (imbis na 2, 2, 4, 4,) magiging (2, 4) na lang

// ngayon iko call out na yung union set, cardinality non, intersection set, at yung intersection cardinality

int main(){

    int numberOfA, numberOfB;

    cout << "Union, Intersection, and Cardinality of Union and Intersection of Two Sets";

    // input for set A
    cout << "\nEnter no. of elements of Set A: ";
    cin >> numberOfA;

    int elementsOfA[numberOfA];

    for(int i = 0; i < numberOfA; i++){
        cin >> elementsOfA[i]; 
    }

    // input for set B
    cout << "\nEnter no. of elements of Set B: ";
    cin >> numberOfB;

    int elementsOfB[numberOfB];

    for(int i = 0; i < numberOfB; i++){
        cin >> elementsOfB[i]; 
    }

    //* union of sets
    
    int lengthOfTwoSets = numberOfA + numberOfB;
    int unionSet[lengthOfTwoSets];
    for(int i = 0; i < lengthOfTwoSets; i++){ // combining setA and setB
        if(i < numberOfA){ // checks if i is lessthan numberOfA --> initial val: i = 0; numberOfA = userinput
            unionSet[i] = elementsOfA[i];
        }else{
            unionSet[i] = elementsOfB[i - numberOfA];
        }
    }

    // arrange from ascending order
    int temp; 
    for(int i = 0; i < lengthOfTwoSets; i++){
        for(int j = i + 1; j < lengthOfTwoSets; j++){
            if(unionSet[i] > unionSet[j]){
                temp = unionSet[i];
                unionSet[i] = unionSet[j];
                unionSet[j] = temp;
            }
        }
    }

    int interSectionSet[] = {};
    int counterForInterSectionSet = 0;
    // intersection set and removing duplicates of union set
    for(int i = 0; i < lengthOfTwoSets; i++){
        for(int j = i + 1; j < lengthOfTwoSets; j++){
            if(unionSet[i] == unionSet[j]){
                interSectionSet[counterForInterSectionSet] = unionSet[j];
                counterForInterSectionSet++;

                // duplicates for union set
                for(int k = 0; k < lengthOfTwoSets; k++){
                    unionSet[k] = unionSet[k + 1];
                }
            }
        }
    }

    for(int i : unionSet){
        cout << i << " ";
    }

}