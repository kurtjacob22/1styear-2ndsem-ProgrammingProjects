#include <iostream>
#include <cstring>

using namespace std;

struct studentrecord{
	char studentnumber[12];
	char studentname[24];
	char courseyear[10];
	float GWA;
	studentrecord *next;
}*front, *rear, *newNode, *travNode;

void header()
{
	system("cls");
	cout << "Machine Problem 6\n";
}

void createRecord()
{

	int response,ctr;
	float tGWA;

	header();
	cout << "Creating a new queue of records\n\n";
	cout << "How ma new students will you add in the queue of records? ";
	cin >> response;
	fflush(stdin);

	newNode=(studentrecord*)malloc(sizeof(studentrecord));
	newNode->next=NULL;
	front=rear=newNode;

	for(ctr=1;ctr<=response;ctr++)
	{
	header();
	cout << "Student Record No. "<< ctr << "\n";
	cout << " Enter Student Number : ";
	gets(newNode->studentnumber);
	cout << " Enter Student Name   : ";
	gets(newNode->studentname);
	cout << " Enter Course and Year: ";
	gets(newNode->courseyear);
	cout << " Enter Student GWA    : ";
	cin >> tGWA;
	newNode->GWA=tGWA;
	fflush(stdin);
	if(ctr != response)
	 {
	  newNode->next=(studentrecord*)malloc(sizeof(studentrecord));
	  rear=newNode->next;
	  newNode=newNode->next;
	  cout << "\nPress a key to proceed...";
	 }
	}
	cout << "\nPress a key to proceed...";
	rear->next=NULL;
	newNode=NULL;

	header();
	cout << "A queue with " << response << "student records is created successfully!\n\n";
	cout << "Press a key to continues...";
}

void traverseRecord()
{
	int ctr=1;
	char flag[12];
	travNode=front;
	if(travNode==NULL)
	{
	header();
	cout << "The queue of student records is currently empty.\n\n";
	cout << "Press a key to continue...";
	}else{
	  strcpy(flag,front->studentnumber);
	  do{
		header();
		cout << "Student Record #" << ctr << ":\n\n";
		cout << " Student Number  : " << travNode->studentnumber << "\n";
		cout << " Student Name    : " << travNode->studentname << "\n";
		cout << " Course and Year : " << travNode->courseyear << "\n";
		printf(" Student GWA     : %.2f\n\n",travNode->GWA);

		front=travNode->next;
		travNode->next=NULL;
		rear->next=travNode;
		rear=rear->next;
		travNode=front;
		ctr++;
		if(strcmp(flag,front->studentnumber) != 0)
		{
		 cout << "Press a key to proceed to the next student record in the queue...";
		}else{
		 cout << "This is the last in the queue of student records...\n\n";
		 cout << "Press a key to continue...";
		}
	  }while(strcmp(flag,front->studentnumber) != 0);
	  travNode=NULL;
	}
}

void addRecord()
{
	float tGWA;

	newNode=(studentrecord*)malloc(sizeof(studentrecord));
	newNode->next=NULL;

	header();
	cout << "Adding a new record to the stack:\n\n";
	cout << "Student Record:\n";
	cout << " Enter Student Number : ";
	gets(newNode->studentnumber);
	cout << " Enter Student Name   : ";
	gets(newNode->studentname);
	cout << " Enter Course and Year: ";
	gets(newNode->courseyear);
	cout << " Enter Student GWA    : ";
	cin >> tGWA;
	newNode->GWA=tGWA;
	fflush(stdin);

	if(rear==NULL)
		front=rear=newNode;
	else
	{
		rear->next=newNode;
		rear=newNode;
	}
	newNode=NULL;
	cout << "\nSucessfully added record to the queue!\n\n";
	cout << "Press a key to continue...";
}

void deleteRecord()
{
	char resp;
	header();
	cout << "Deleting a Record from the Queue\n\n";

	travNode=front;
	if(travNode==NULL)
		cout << "The queue is empty!";
	else{
	cout << "This is the first record in the queue:\n";
	cout << " Student Number  : " << travNode->studentnumber << "\n";
	cout << " Student Name    : " << travNode->studentname << "\n";
	cout << " Course and Year : " << travNode->courseyear << "\n";
	printf(" Student GWA     : %.2f\n\n",travNode->GWA);
	}
	do{
	 cout << "Confirm Delete[Y/N]?";
	 cin >> resp;
	 fflush(stdin);
	 if(toupper(resp)!='Y' && toupper(resp)!='N')
		cout << "Invalid\n";
	 }while(toupper(resp)!='Y' && toupper(resp)!='N');

	 if(toupper(resp)=='N')
		cout << "Record not deleted.\n";
	 else{
		front=front->next;
		travNode->next=NULL;
		free(travNode);
		travNode=NULL;
		cout << "Record deleted from queue successfully.\n";
	 }
}

int main()
{
	int response;
	do{
	header();
	cout << "Press the number of the desired action\n\n";
	cout << " (1) Create a Record\n";
	cout << " (2) Show Record\n";
	cout << " (3) Add a student in Record\n";
	cout << " (4) Delete a student from Record\n";
	cout << " (5) Close Program\n\n";
	do{
	cout << "Enter response : ";
	cin >> response;
	fflush(stdin);
	if(response<1 || response>5)
	 cout << "Invalid!\n";
	}while(response<1 || response>5);
	switch (response)
	{
		case 1:
			createRecord();
			break;
		case 2:
			traverseRecord();
			break;
		case 3:
			addRecord();
			break;
		case 4:
			deleteRecord();
			break;
	}
	}while(response!=5);
	return 0;
}
