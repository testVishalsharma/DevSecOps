
//exp111
#include<stdio.h> 
#include<stdlib.h>
{
int data;
struct node*next;
};
struct node* create node (int data){
struct node* new node=(struct node*)malloc(size of struct node));
if (new node){
print("memory allocation failed.\h");
exit(1);
}
newnode-> data =data;
newnode->next= null; 
return new node;
int (data){
struct node*newnode =createnode(data);
newnode->next=*head;
*head=newnode;
void print(list(struct node*head)
{
struct node*temp=head;
while(temp!=null)
{
print("%d->",temp->data);
temp=temp->next;
}
int main()
{
struct node* head=null;
insertatbeginning(&head,10);
insertatbeginning(&head,20);
insertatbeginning(&head,30);
print("linked list after insertion \n");
print list(head);
return 0;
}
 
