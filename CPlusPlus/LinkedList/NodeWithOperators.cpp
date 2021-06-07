#include <iostream>
using namespace std;

 

//Creating Node Structure
struct Node{
 int data;
 Node *link;
};
//creating head pointer and equating to NULL
Node *head=NULL;

 

//Function to insert at the beginning of linked list
void insertBeg (int d)
{
 Node *ptr = new Node();
 ptr->data=d;
 ptr->link=head;
 head=ptr;
}
//Function to insert at the end of linked list
void insertEnd (int d)
{
  Node *ptr = new Node();
  ptr->data=d;
  ptr->link=NULL;

 

  //If list is empty
  if(head==NULL)
  head=ptr;
  //else list is not empty
  else
  {
   Node *curr = head;
   while(curr->link != NULL)
   {
    curr=curr->link;
   }
   curr->link=ptr;

 

  }

 

}
//Function to display linked list
void dispLink()
{
 Node *curr=head;
 while(curr!=NULL)
 {
  cout<<curr->data<<" ";
  curr=curr->link;
 }
 cout<<"\n";
}
//Main Function
int main()
{
 insertBeg(2);
 insertBeg(1);
 insertEnd(3);
 dispLink();
 return 0;
}

 

// output: 1 2 3