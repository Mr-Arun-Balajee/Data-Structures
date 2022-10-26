#include<stdio.h>
#include<stdlib.h>

int option,stack[10000],top=-1,x,i,n;

void mainMenu(){
    printf("\nStack Array\n1.Push\n2.Pop\n3.Display\n4.Exit\nEnter the option:");
    scanf("%d",&option);
}
void push(){
    if(top>=n-1)
    {
        printf("\nOverflow");
        
    }
    else{
    printf("Enter the element:");
    scanf("%d",&x);
        top++;
        stack[top]=x;
        printf("%d is inserted..",x);
    }
}
void pop(){
    if(top<=-1)
    {
        printf("\nUnderflow");
        
    }
    else{
        printf("%d is deleted..",stack[top]);
        top--;
    }
    
}
void display(){
    if(top>=0){
        for(i=top;i>=0;i--)
        printf("%d\t",stack[i]);
    }
    else
    {
        printf("no element..");
    }
}
void main(){
    printf("Enter the size of the stack:");
    scanf("%d",&n);
    do
    {
        mainMenu();
        switch(option)
        {
            case 1:
            push();
            break;
            case 2:
            pop();
            break;
            case 3:
            display();
            break;
            case 4:
            exit(0);
            break;
            
        }
    }while(1);
}