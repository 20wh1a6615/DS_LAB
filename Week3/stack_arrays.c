#include<stdio.h>
#include<stdlib.h>
#define size 10
int top = -1,stack[size];


void push(int ele){
    stack[++top] = ele;
    }


int pop(){
    return stack[top--];
    }

int peek(){
    return stack[top];
    }


void display(){
    for(int i = top;i > -1;i--)
        printf("%d\n",stack[i]);
        }

int main(){
    int ch,ele;
    while(1){
        printf("\n1-push\n2-pop\n3-peek\n4-display\n5-exit\n");
        printf("eneter your choice");
        scanf("%d",&ch);
        switch(ch){
            case 1:if(top == size - 1)
                        printf("stack overflow");
                   else{
                        printf("enter the element to be inserted");
                        scanf("%d",&ele);
                        push(ele);
                        }
                   break;
            case 2:if(top == -1)
                        printf("stack underflow");
                   else
                        printf("deleted element is %d",pop());
                   break;
            case 3:if(top == -1)
                        printf("stack underflow");
             else
                        printf("top element is %d",peek());
                   break;
            case 4:if(top == -1)
                        printf("stack underflow");
                   else
                        display();
                   break;
            case 5:exit(0);
            }
        }
    }
//output
1-push
2-pop
3-peek
4-display
5-exit
eneter your choice1
enter the element to be inserted35

1-push
2-pop
3-peek
4-display
5-exit
eneter your choice1
enter the element to be inserted15

1-push
2-pop
3-peek
4-display
5-exit
eneter your choice1
enter the element to be inserted55

1-push
2-pop
3-peek
4-display
5-exit
eneter your choice1
enter the element to be inserted60

1-push
2-pop
3-peek
4-display
5-exit
eneter your choice4
60
55
15
35

1-push
2-pop
3-peek
4-display
5-exit
eneter your choice2
deleted element is 60
1-push
2-pop
3-peek
4-display
5-exit
eneter your choice3
top element is 55
1-push
2-pop
3-peek
4-display
5-exit
eneter your choice4
55
15
35

1-push
2-pop
3-peek
4-display
5-exit
eneter your choice5

