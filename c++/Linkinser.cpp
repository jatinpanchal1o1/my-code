#include <stdlib.h>
#include <iostream>
using namespace std;
struct node
{
	int data;
	struct node* next;
};

void linkedlisttraversal(struct node *ptr){
	while(ptr != NULL){
	cout<<ptr->data<<" ";
	ptr=ptr->next;
}	

}
 
int main() {
	struct node* head;
	struct node* second;
	struct node* third;

head=(struct node*)malloc(sizeof(struct node));
second=(struct node*)malloc(sizeof(struct node));
third=(struct node*)malloc(sizeof(struct node));

head->data=7;
head->next=second;

second->data=8;
second->next=third;

third->data=10;
third->next=NULL;

cout<<"Before insertion\n";

linkedlisttraversal(head);

cout<<"After insertion\n";

struct node* firstnew;
firstnew=(struct node*)malloc(sizeof(struct node));

firstnew->data=100;
firstnew->next=head;

head=firstnew;

linkedlisttraversal(head);
cout<<"\n";


return 0;
}