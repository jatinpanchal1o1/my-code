#include <stdlib.h>
#include <iostream>
using namespace std;
struct node
{
	int data;
	struct node* next;
};

// void linkedlisttraversal(struct node* ptr){
// 	cout<<ptr->data;

// }
 
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

linkedlisttraversal(struct node* ptr);

return 0;
}