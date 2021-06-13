#include <stdio.h>

void gotoxy(int x, int y){
    printf("%c[%d;%df", 0x1B, y, x);
}// for turbo users: delete this function

struct Candidate{
    char name[100]; // name of the candidate/president
    int votePerPrecint[4]; // number of votes per precint inside an array
    int total; // sum of all votes in every precints
    float percentage; // percentage of the total votes of the candidate
}President[3]; // declared 4 lists of presidents

void Headers() {
	gotoxy(29, 2); printf("TALLY OF VOTE PER PRECINCT");
}

void Labels() {
    gotoxy(4, 4); printf("Precincts");
	gotoxy(21, 4); printf("Candidate");
	gotoxy(38, 4); printf("Candidate");
	gotoxy(55, 4); printf("Candidate");
	gotoxy(72, 4); printf("Candidate");

    // PRECINT NUMBER
    gotoxy(4, 7); printf("1");
    gotoxy(4, 8); printf("2");
    gotoxy(4, 9); printf("3");
    gotoxy(4, 10); printf("4");
    gotoxy(4, 11); printf("5");
}

int main(){

    int totalVotes = 0; // variable declaration for total Votes
    int coordinates[] = {
        // Coordinates for the number of votes -> data. 
        // X = 21 : Y = 7
        21, 7 
    };

    system("cls"); // change this code into clrscr();

    for(int i = 0; i <= 3; i++){
        system("cls"); // change this code into clrscr();
        gotoxy(6, 5); printf("Enter Candidate #%d's name: ", i + 1);
        gets(President[i].name); // inserts the value to the struct
    }

    

    for(int i = 0; i <= 3; i++){ // Loop for the specific candidate
        for(int j = 0; j <= 4; j++){ // Loop for inputting values in Candidate.votePerPrecint
            system("cls"); // change this code into clrscr();
            gotoxy(6, 5); printf("\nPRECINT #%d Enter votes for %s: ", j + 1, President[i].name);
            scanf("%d", &President[i].votePerPrecint[j]); // reads an integer input from the user and stores it on the (struct)
            totalVotes += President[i].votePerPrecint[j]; // gets the sum of all the votes in all candidates
            
        } 
    }

    // !PRINT ALL DATA
    system("cls"); // change this code into clrscr();
    Headers(); // calls the Headers() function
    Labels();   // calls the Labels() function
    // Candidates Name:
    gotoxy(21, 5); printf(President[0].name);
	gotoxy(38, 5); printf(President[1].name);
	gotoxy(55, 5); printf(President[2].name);
	gotoxy(72, 5); printf(President[3].name);
    for(int i = 0; i <= 3; i++){ // Loop for the specific candidate
        for(int j = 0; j <= 4; j++){ // Loop for Printing values in Candidate.votePerPrecint -> these data came from the user
            // first appearance of the coordinate variable. 
            // the y value was incremented in the gotoxy()
            // while the x value remain constant
            gotoxy(coordinates[0], coordinates[1]++); 
            printf("%d", President[i].votePerPrecint[j]);
        } 
        coordinates[0] += 17; // added 17 to the X Coordinate to push the next candidate's vote count to the next column
        coordinates[1] = 7; // resets the coordinate value back to 7 so the print will start under the candidate's name
    }
    

    // !prints the total votes, percentage and remarks section of the system
    gotoxy(0, 13); printf("Total Votes:(%d)", totalVotes); 
    gotoxy(0, 14); printf("Percent: (100.0)");
    gotoxy(0, 17); printf("REMARKS:");

    int newCoor = 21; // created a new Coordinate for the next output process
    for(int i = 0; i <= 3; i++){ // outer loop -> for the candidate or the president -> 'i' specifies the candidate
        for(int j = 0; j <= 3; j++){ // inner loop -> for the candidate's vote in each precint -> 'j' specifies the precint votes
            President[i].total += President[i].votePerPrecint[j]; // gets the total votes of each candidate

            // gets the percentage of each candidates depending on the total sum of the votes
            // need to convert it to float so that the return value will become float
            President[i].percentage = ((float)President[i].total / (float)totalVotes) * 100;  
        }
        
        gotoxy(newCoor, 13); printf("%d", President[i].total); // prints the total votes of each candidate -> and placed it based on their column
        gotoxy(newCoor, 14); printf("%.2f", President[i].percentage); // prints the percentage of each candidate -> and placed it based on their column
        if(President[i].percentage >= 50.0){ // for remarks -> if the percentage is higher than 50% -> auto winner
            int coordinatesForWinner = 21; // new coordinates for the winner
            gotoxy(coordinatesForWinner + ((i) * 17), 17); printf("WINNER"); // prints the winnner
        }
        
        newCoor += 17; // added 17 to the newCoor to push data to another column
    }

    // !for run off between 2 candidates that gets the highest votes
    // max1 and max2 for first and second to the highest number of votes, ~
    // -> track1 and track2 was used to track the index of the first highest and second highest
    int max1, max2, track1, track2; 
    int totalVotesPerCandidate[3]; // temporary storage that holds the total votes for each candidate.
    for(int i = 0; i <= 3; i++){ 
        totalVotesPerCandidate[i] = President[i].total; // inserts the value inside the array
    }
    
    for(int i = 0; i <= 3; i++){ // Loop to get the Highest and 2nd to the highest in the array/list
        if(totalVotesPerCandidate[i] > max1){ 
            /*
             * If current element of the array is first largest
             * then make current max as second max
             * and then max as current array element
             */
            max2 = max1;
            max1 = totalVotesPerCandidate[i];
            track2 = track1;
            track1 = i;
        }
        else if(totalVotesPerCandidate[i] > max2 && totalVotesPerCandidate[i] < max1){
            /*
             * If current array element is less than first largest
             * but is greater than second largest then make it
             * second largest
             */
            max2 = totalVotesPerCandidate[i];
            track2 = i;
        }
    }
    gotoxy(21 + ((track1) * 17), 17); printf("1st - %c", President[track1].name[0]); // prints the 1st
    gotoxy(21 + ((track2) * 17), 17); printf("2nd - %c", President[track2].name[0]); // prints the 2nd
    getch();
    return 0;
}