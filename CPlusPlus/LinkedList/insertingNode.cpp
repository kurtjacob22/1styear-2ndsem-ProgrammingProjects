#include <iostream>
using namespace std;

 

//Creating Node Structure
struct Node{
 int data;
 Node *link;
};
//creating head pointer and equating to NULL
Node *head=NULL;

 

//Function to delete node at the beginning
void deleteBeg(){
//if list is empty.
if(head==NULL)
 cout<<"LIST IS EMPTY\n";
else
{
 Node *ptr=head;
 head=head->link;
 delete(ptr);

 

}
}

 

//Function to delete node at the end
void deleteEnd()
{
 Node *curr;

 

 //if list is empty.
 if(head==NULL)
  cout<<"EMPTY LIST\n";
 //if list has only one node.
 if(head->link==NULL)
 {
  curr=head;
  head=NULL;
  delete(curr);
 }
 //Traversing the list.
 else
 {  Node *prev;
  curr=head;
  while(curr->link!=NULL)
  {
   prev=curr;
   curr=curr->link;
  }
  prev->link=NULL;
  delete(curr);

 

 }

 

}

 

//Function to insert at the end of linked list
void insertEnd (int d)
{

 

 Node *ptr = new Node();
 ptr->data=d;
 ptr->link=NULL;

 

 if(head==NULL)
 head=ptr;
 else
 {
  Node *temp = head;
  while(temp->link != NULL)
  {
   temp=temp->link;
  }
  temp->link=ptr;

 

 }

 

}

 

// function to display Linked list
void displayList(){
 Node *ptr=head;
 if(head==NULL)
  cout<<"LIST IS EMPTY\n";
 while(ptr!=NULL)
 {
  cout<<ptr->data<<" ";
  ptr=ptr->link;
 }
 cout<<"\n";
}

 

//Main Function
int main()
{

 

 insertEnd(1);
 insertEnd(2);
 insertEnd(3);
 insertEnd(4);
 insertEnd(5);
 displayList(); // 1 2 3 4 5

 

 displayList();    // 2 3 4 5
 deleteEnd();
 displayList();    // 2 3 4
 return 0;
}