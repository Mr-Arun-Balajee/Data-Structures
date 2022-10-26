#include<stdio.h>
#include<stdlib.h>

typedef struct node* nn;

struct node {
    int data;
    nn next;
};

nn head=NULL;
int option,x;
void mainMenu(){
    printf("\nSingly Linked List\n1.Insert Begin\n2.Insert End\n3.Delete Begin \n4.Delete End\n5.Display\n6.Exit\nEnter the option:");
    scanf("%d",&option);
}
void insertBegin(){
    printf("Enter the data: ");
    scanf("%d", &x);
    nn newNode=(nn)malloc(sizeof(struct node));
    newNode->data = x;
    if(head == NULL){
        newNode->next = NULL;
        head = newNode;
    }
    else{
        newNode->next = head;
        head = newNode;
    }
    printf("Element  %d is inserted.",x);
    
}
void insertEnd(){
     printf("Enter the data: ");
    scanf("%d", &x);
    nn newNode=(nn)malloc(sizeof(struct node));
    newNode->data = x;
    if(head == NULL){
        newNode->next = NULL;
        head = newNode;
    }
    else{
        nn temp=head;
        while(temp->next!=NULL){
            temp=temp->next;
        }
        temp->next=newNode;
    }
}
void deleteBegin()
{
    if(head==NULL){
        printf("NOT possible");
    }
    else
    {
        nn temp=head;
        printf("\n%d is deleted..\n",temp->data);
        head=head->next;
        free(temp);
        
    }
}
void deleteEnd(){
       if(head==NULL){
        printf("NOT possible");
    }
    else
    {
        nn three;
        nn temp=head;
        while(temp->next!=NULL){
            three=temp;
            temp=temp->next;
        }
        printf("\n%d is deleted..\n",temp->data);
        three->next=NULL;
        free(temp);
    }
}
void display(){
    if(head==NULL){
        printf("EMPTY.........");
    }
    else
    {
        nn temp=head;
        while(temp!=NULL){
            printf("%d\n",temp->data);
            temp=temp->next;
        }
    }
}
void main(){
    do{
    mainMenu();
    switch(option)
    {
        case 1:
        insertBegin();
        break;
        case 2:
        insertEnd();
        break;
        case 3:
        deleteBegin();
        break;
        case 4:
        deleteEnd();
        break;
        case 5:
        display();
        break;
        case 6:
        printf("Exitted...........");
        exit(0);
    }
    }while(1);
}