#include<stdio.h>
#include<stdlib.h>

void create();
void display();
void insert();
void delete_pos();


struct node
{
    struct node* next;
    int data;
};
struct node *start=NULL;

int main()
{
   int choice;
   while(1)
   {
    printf("\n.....Slingy Linked List.....\n");
    printf("\n 1: Insert\n");
    printf("\n 2: Display\n");
    printf("\n 3: Insert\n");
    printf("\n 4: Delete\n");
    printf("\n 5: Exit\n");
    printf("\nEnter a choice:\t");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1:
        create();
        break;
        case 2:
        display();
        break;
        case 3:
        insert();
        break;
        case 4:
        delete_pos();
        break;
        case 5:
        exit(0);
        break;
        default:
        printf("\nWrong Choice\n");
    }
    return 0;
   }
}
void create()
{
    struct node *temp,ptr;
    temp=malloc(sizeof(struct node));
    if (temp==NULL)
    {
        printf("\nPut of Memory Space:\n");
        exit(0);
    }
    printf("\nEnter the  value for the node:\t");
    scanf("%d",&temp->data);
    temp->next=NULL;
    if(start==NULL)
    {
        start=temp;
    }
    else
    {
        ptr=start;
        while(ptr->!=NULL)
        {
            ptr=ptr->next;
        }
        ptr->next=temp;
    }
}
void display()
{
    struct node *ptr;
    if(start==NULL)
    {
        printf("\nList is Elements are:\t");
        while(ptr!=NULL)
        {
            printf("%d",ptr->data);
            ptr=ptr->next;
        }
    }

}
void insert()
{
    struct node *temp;
    temp=(struct node *)malloc(sizeof(struct node));
    printf("\n Enter the first node:\t");
    scanf("%d",&temp->data);
    temp->next = NULL;
    if(start==NULL){
        start=temp;
    }
    else{
        temp->next=start;
        start = temp;
    }
    
}
void delete()
{
    int i,pos;
    struct node *temp,*ptr;
    if(start==NULL)
    {
        printf("\nThe List is Empty:\n");
        exit(0);
    }
    else
    {
        printf("\nEnter the position of the node to be deleted:\t");
        scanf("%d",&pos);
        if(pos==0)
        {
              ptr=start;
              for(i=0;i<pos;i++)
              {
                temp=ptr;
                ptr=ptr->next;
                if(ptr==NULL)
                {
                    printf("\nPosition not Found:\t");
                    return;
                }
              }
              temp->next=ptr->next;
              printf("\nThe Deleted Element is:%d\t",ptr->data);
              free(ptr);
        
        }

    }
}