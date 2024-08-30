#include<stdio.h>
#include<stdlib.h>
#define SIZE 5

int stack[SIZE];
int top = -1;

void push(int no){
        if(top == SIZE -1){
                printf("\nstack overflow");
        }
        else{
                top++;
                stack[top] = no;
        }
}

void pop(){
                if(top == -1){
                        printf("\nstack underflow");

                }
                else{
                        printf("\npop ELement : %d",stack[top]);
                        top--;
                }
}

void display(){
                int i,count = 0;
                if (top == -1){
                        printf("\nStack underflow");
                                
                }    
                        else{
                                for(i = top;i >= 0;i--){
                                        printf("\n%d",stack[i]);
                                        count++;
                                }
                        }

                       
                        printf("\nno of element in stack : %d",count);

}
void peep(int location){
                int index;
                if(top == -1){
                                printf("\nstack underflow");
                }
                else{
                                index = top - location + 1;
                                if(index >= 0 && index <= SIZE){
                                                printf("\nIn location %d => element : %d",location,stack[index]);
                                }
                                else{
                                                printf("\nInvalid location");
                                }
                }
}

void change(int location,int no){
                int index;
                if(top == -1){
                                printf("\nStack underflow");
                }
                else{
                               index = top - location + 1;  
                                if(index >= 0 && index <= SIZE){
                                                printf("\nIn location %d => new element : %d",location,stack[index]);
                                }
                                else{
                                                printf("\nInvalid location");
                                }
                        
                }

}

int main(){
                int choice,no,location;
                while(1){
                                printf("\n1-------->For push");
                                printf("\n2-------->For pop");
                                printf("\n3-------->For display");
                                printf("\n4-------->For peep");
                                printf("\n5-------->For change");
                                printf("\n6-------->Exit");
                                printf("\nEnter your choice : ");
                                scanf("%d",&choice);

                                switch(choice){
                                                case 1:
                                                        printf("\nEnter the no:");
                                                        scanf("%d",&no);
                                                        push(no);
                                                        break;
                                                case 2:
                                                        pop();
                                                        break;
                                                case 3:
                                                        display();
                                                        break;
                                                case 4:
                                                        printf("\nEnter the location:");
                                                        scanf("%d",&location);
                                                        peep(location);
                                                        break;
                                                        
                                                case 5:        
                                                        printf("\nEnter the location:");
                                                        scanf("%d",&location);
                                                        printf("Enter the no u want to change :");
                                                        scanf("%d",&no);
                                                        change(location,no);
                                                        break;
                                                case 6:
                                                        exit(0);
                                                        break;
                                        default:
                                        printf("\nInvalid choice");
                                        break;
                                                
                                }
                }
                return 0;
}
