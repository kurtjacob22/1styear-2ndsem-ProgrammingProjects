#include <iostream>
#include <cstring>

using namespace std;

struct record {
	char StudNum[13];
	char Name [25];
	char CourseYear [11];
	float GWA;
	record *next;
}*pushnode = NULL, *top = NULL, *popnode = NULL, *temptop = NULL;
	
	int stacks = 0;
	
int main () {
	system ("CLS");
	int CaseNum;
	
	do {
		cout << "\n Please choose an action: \n\n";
		cout << "\t1 - Create Stack of Student Records\n";
		cout << "\t2 - Display created stack of Student Records \n";
		cout << "\t3 - Add another record to stack of Student Records\n";
		cout << "\t4 - Delete latest record in stack of Student Records \n";
		cout << "\t5 - EXIT \n\n";
		cout << "  Enter the number of operation to be performed => ";
		cin >> CaseNum;	
		cout << "\n\n To continue, just press any key...";
		// getch();	
	} while (CaseNum>5);
	
	char Temp;
	char Resp;
	char Ans;
	int ctr = 1;
	
	switch (CaseNum) {
		case 1:					
			pushnode = (struct record*)malloc(sizeof(struct record));
			pushnode->next = NULL;
			top = pushnode;
		
			system("CLS");
	
			if((stacks == 1) && (top != NULL)) {
				cout << "An existing record is available. Do you want to create new stack of record? [Y/N] ";
				cin >> Ans;
		
				if(toupper(Ans) == 'N') {
					printf("Returning to Main Menu...");
					main();
				}
			}
	
			printf("\n------Creation of Nodes for the Stack of Student Records------\n");	
	
			do {
				cout << "\nStudent Record No. " << ctr <<  "\n";
				cout << "\n\tEnter Student No. : ";
				cin >> pushnode->StudNum;
				cin >> Temp;
				cout << "\tEnter Student Name: ";
				gets(pushnode->Name);
				cout << "\tEnter Course and Year: ";
				gets(pushnode->CourseYear);
				cout << "\tEnter GWA: ";
				cin >> pushnode->GWA;
				cin >> Temp;
				cout << "\n Add another student record? [Y/N]: ";
				cin >> Resp;		
				ctr++;
		
				if(toupper(Resp) == 'Y') {
					pushnode = (struct record*)malloc(sizeof(struct record));
					pushnode->next = top;
					top = pushnode;
				}		
			}while (toupper(Resp) == 'Y');
	
			pushnode = NULL;
			stacks = 1;
			main();
			break;
			
			
		case 2:
			system("CLS");
			printf("\n------Displaying the Stack of Student Records------\n");
	
			ctr = 1;
			popnode = top;
	
			if (popnode == NULL)
				printf("\nSorry, no records are available.");
			else {
				do {
					cout << "\nStudent Record No. "<< ctr << "\n";
					cout << "\tStudent No. : " << top->StudNum;
					cout << "\n\tStudent Name : " << top->Name;
					cout << "\n\tCourse and Year : " << top->CourseYear;
					printf("\n\tGWA : %0.2f\n", top->GWA);
					top = top->next;
					popnode->next = NULL;			
			
					popnode->next = temptop;
					temptop = popnode;
					popnode = NULL;
			
					popnode = top;	
					ctr++;		
				}while (top != NULL);
		
				struct record *tempptr = NULL;
				tempptr = temptop;
				do {
					strcpy(tempptr->StudNum, temptop->StudNum);
					strcpy(tempptr->Name, temptop->Name);
					strcpy(tempptr->CourseYear, temptop->CourseYear);
					tempptr->GWA = temptop->GWA;
					temptop = temptop->next;
					tempptr->next = NULL; 
					tempptr->next = top;
					top = tempptr;
					tempptr = temptop;
				}while (temptop != NULL);	
			
				temptop = NULL;				
			}
			main();
			break;
			
			
		case 3:
			pushnode = (struct record*)malloc(sizeof(struct record));
	
			system("CLS");
	
			cout << "------Add NEW Student Record below.------\n";
			cout << "\n\tEnter Student No. : ";
			cin >> pushnode->StudNum;
			cin >> Temp;
			cout << "\tEnter Student Name: ";
			gets(pushnode->Name);
			cout << "\tEnter Course and Year: ";
			gets(pushnode->CourseYear);
			cout << "\tEnter GWA: ";
			cin >> pushnode->GWA;
			cin >> Temp;
	
			pushnode->next = NULL;
			if(top == NULL) {
				top = pushnode;
				stacks = 1;
			}
			else {
				pushnode->next = top;
				top = pushnode;
			}	
			
			pushnode = NULL;
			cout << "\nStudent record added...";
			main();
			break;
			
			
		case 4:
			popnode = top;
	
			system("CLS");
	
			if(popnode == NULL)
				cout << "No records available...";
			else {
				top = top->next;
				popnode->next = NULL;
				cout << "Record has been deleted successfully...";
			}
	
			free(popnode);
			popnode = NULL;
			main();
			break;
			
			
		case 5:
			cout << "Thank you for using the program...";
			exit(0);
			break;	
	}
	
	return 0;	
}
