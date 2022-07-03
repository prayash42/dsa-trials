#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node * next;
}*head,*tail,*new,*temp,*current,*next,*prev=NULL;
int main(){
    int value;
    int a=1;
    do{
        new=(struct node*)malloc(sizeof(struct node));
        printf("enter data\n");
        scanf("%d",&value);
        new->data=value;
        new->next=NULL;
        if(head==NULL){
            head=new;
            tail=new;
        }
        else{
            tail->next=new;
            tail=new;
        }
        printf("1 to cont \n 0 to break");
        //char ch;
        scanf("%d",&a);

    }while(a==1);
    
printf("inswrttion\n");
new=(struct node *)malloc(sizeof(struct node));
printf("enter value");
scanf("%d",&new->data);
new->next=head;
head=new;
printf("insertion at end");
new=(struct node *)malloc(sizeof(struct node));
printf("enter value");
scanf("%d",&new->data);
tail->next=new;
new->next=NULL;
tail=new;
printf("enter position\n");
int pos;
scanf("%d",&pos);
temp=head;
new=(struct node *)malloc(sizeof(struct node));
printf("enter value");
scanf("%d",&new->data);
for(int i=0;i<pos-1;i++){
    temp=temp->next;
}
    new->next=temp->next;
    temp->next=new;


temp=head;
    while(temp!=NULL){
        printf("node is%d\n",temp->data);
        temp=temp->next;}
printf("AFTER DELETING");
temp=head;
head=head->next;
temp->next=NULL;
temp=head;
while(temp->next!=tail){
    temp=temp->next;
}
temp->next=NULL;
printf("enter position to delete");
int y;
scanf("%d",&y);
temp=head;
for(int i=0;i<y-1;i++){
    temp=temp->next;
}
temp->next=temp->next->next;
current=head;
while(current !=NULL){
    next=current->next;
    current->next=prev;
    prev=current;
    current=next;
}
head=prev;
temp=head;
    while(temp!=NULL){
        printf("node is%d\n",temp->data);
        temp=temp->next;}
}