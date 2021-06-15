#include <iostream>

using namespace std;

struct Node{
	string studentNumber;
	string studentName;
	string courseYear;
	float GWA;
	Node* nextNode;

	void insertBegining(Node* head){
		Node* node = new Node();
		insertionOfData(node);
		node -> nextNode = head;
		head = node;
	}

	void insertEnding(Node* head){

		Node* node = new Node(); // create node

		if(head == NULL){
			head = node;
			cout << "Empty List, Please Create a Node First";
		}else{
			
			insertionOfData(node);

			Node* curr = head;
			while(curr -> nextNode != NULL){
				curr=curr -> nextNode;
			}
			curr -> nextNode=node;
		}
	}

	void insertionOfData(Node* node){
		cin.sync();
		// insertion of data into node
		cout << endl << "Enter Student Number: ";
		getline(cin, node -> studentNumber);
		cout << "Enter Student Name: ";
		getline(cin, node -> studentName);
		cout << "Enter Course and Yr: ";
		getline(cin, node -> courseYear);
		cout << "Enter GWA: ";
		cin >> node -> GWA;
	}

	void traversal(){

	}

	void displayLinkedList(Node* node){ // param:: starting node
		// if(head == NULL){
		// 	cout << "Empty List";
		// }
		Node* head = node;
		while(head != NULL){
			cout << endl << "Student Number: " << head -> studentNumber << endl;
			cout << "Student Name: " << head -> studentName << endl;
			cout << "Course and Yr: " << head -> courseYear << endl;
			cout << "GWA: " << head -> GWA << endl;
			head = head -> nextNode;
		}
	}
};




int main(){
	system("cls");
	Node* head = NULL;
	head = new Node(); // create Node option

	head -> studentNumber = "2020-13283";
	head -> studentName = "Kurt Jacob E. Urquico";
	head -> courseYear = "BSCS 1 - 4";
	head -> GWA = 1.43;
	head -> nextNode = NULL;

	head -> insertEnding(head);
	head -> insertBegining(head);
	head -> insertEnding(head);
	cout << endl;
	system("pause");
	system("cls");
	cout << "\nlist: " << endl;
	head -> displayLinkedList(head);
}