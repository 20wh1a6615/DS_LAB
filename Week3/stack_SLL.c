#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *link;
    };
struct node *top = NULL,*cur,*temp;
void push(int ele){
    cur = (struct node*)malloc(sizeof(struct node));
    cur -> data = ele;
    cur -> link = NULL;
    if(top == NULL)
        cur -> link = top;
    else
        cur -> link = top;
    top = cur;
}

int pop(){
    temp = top;
    if(top == NULL)
        printf("stack underflow");
    else{
        top = top -> link;
        return temp -> data;
        free(temp);
        }
}

int peek(){
    return top -> data;
    }

void display(){
    temp = top;
    while(temp != NULL){
        printf("%d\n",temp ->  data);
        temp = temp -> link;
        }
}

int main(){
    int ch,ele;
    while(1){
        printf("\n1-push\n2-pop\n3-peek\n4-display\n5-exit\n");
        printf("enter your choice");
        scanf("%d",&ch);
        switch(ch){
            case 1:printf("enter the element");
                   scanf("%d",&ele);
                   push(ele);
                   break;
            case 2:printf("deleted element is %d",pop());
                   break;
            case 3:if(top == NULL)
                        printf("stack underflow");
                   else
                        printf("topmost element is %d",peek());
                   break;
            case 4:if(top == NULL)
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
enter your choice1
enter the element17

1-push
2-pop
3-peek
4-display
5-exit
enter your choice1
enter the element25

1-push
2-pop
3-peek
4-display
5-exit
enter your choice1
enter the element22

1-push
2-pop
3-peek
4-display
5-exit
enter your choice1 
enter the element10

1-push
2-pop
3-peek
4-display
5-exit
enter your choice4
10
22
25
17

1-push
2-pop
3-peek
4-display
5-exit
enter your choice2
deleted element is 10
1-push
2-pop
3-peek
4-display
5-exit
enter your choice3
topmost element is 22
1-push
2-pop
3-peek
4-display
5-exit
enter your choice4
22
25
17

1-push
2-pop
3-peek
4-display
5-exit
enter your choice5
