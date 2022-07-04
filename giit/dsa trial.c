#include <stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node * next;
}*head,*tail,*temp,*new;
int main(){
    int value,a=1;
    do{
        
    
        new=(struct node*)malloc(sizeof(struct node));
        printf("enter data");
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
            tail->next=head;
        }
        printf("1 to continue\n0 to stop");
        scanf("%d",&a);
    }while(a==1);

temp=head;
while(temp->next!=head){
    printf("%d\n",temp->data);
    temp=temp->next;
}
printf("%d \n",temp->data);
printf("at first insertion\n");
 new=(struct node*)malloc(sizeof(struct node));
 printf("enter data\n");
 scanf("%d",&value);
 new->data=value;
 new->next=head;
 tail->next=new;
 head=new;
 printf("deleting from starting\n");
 temp=head;
 tail->next=temp->next;
 head=head->next;
 temp->next=NULL;
 printf("deleting from end\n");
 temp=head;
 while(temp->next!=tail){
     temp=temp->next;
 }
 temp->next=head;
 tail->next=NULL;
 tail=temp;
 temp=head;
 while(temp->next!=head){
    printf("%d",temp->data);
    temp=temp->next;
}
printf("%d",temp->data);

}
