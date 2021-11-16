#include<stdio.h>
#include<stdlib.h>
struct node{
     int data;
     struct node *link;
    };
 struct node *head = NULL,*cur,*temp;
 struct node* create(){
     int n;
     printf("enter the no. of nodes");
     scanf("%d",&n);
     for(int i = 1;i <= n;i++){
         cur = (struct node*)malloc(sizeof(struct node));
         printf("enter the data");
         scanf("%d",&(cur -> data));
         cur -> link = NULL;
         if(head == NULL)
             head = cur;
         else{
             temp = head;
             while(temp -> link != NULL)
                  temp = temp -> link;
             temp -> link = cur;
             }
 }
 return head;
 27 }
 //insertion
 struct node* insert_begin(int ele){
        cur = (struct node*)malloc(sizeof(struct node));
        cur -> data = ele;
        cur -> link = head;
        head = cur;
 return head;
  }
 struct node* insert_end(int ele){
         cur = (struct node*)malloc(sizeof(struct node));
         cur -> data = ele;
         cur -> link = NULL;
         temp = head;
        while(temp -> link != NULL)
            temp = temp -> link;
        temp -> link = cur;
 return head;
 }
 struct node* insert_position(int pos,int ele){
          int c = 1;
          cur = (struct node*)malloc(sizeof(struct node));
          cur -> data = ele;
          temp = head;
          while(c < pos -1){
              temp = temp -> link;
              c++;
          }
          cur -> link = temp -> link;
          temp -> link = cur;
 return head;
 }
//display
 void display(struct node*head){
         temp = head;
         while(temp != NULL){
              if(temp -> link == NULL){
                    printf("%d",temp -> data);
                    break;
                  }
                printf("%d -> ",temp -> data);
                temp = temp -> link;
          }
  }
 int main(){
       int ele,ch,pos;
       while(1){
          printf("\n1-create\n2-insertion at begin\n3-insertion at end\n4-insertion at position");
          printf("enter your choice");
          scanf("%d",&ch);
          switch(ch){
              case 1:head = create();
                    display(head);
                    break;
              case 2:printf("enter the element to be inserted");
                    scanf("%d",&ele);
                    head = insert_begin(ele);
                    display(head);
                    break;
              case 3:printf("enter the num to be inserted at the end");
                    scanf("%d",&ele);
                    head = insert_end(ele);
                    display(head);
                    break;
              case 4:printf("enter the position of the element to be inserted");
                    scanf("%d",&pos);
                    printf("enter the element to be inserted");
                    scanf("%d",&ele);
                    head = insert_position(pos,ele);
                    display(head);
              case 5:exit(0);
          }
   }
 } 
//ouput
1-create
2-insertion at begin
3-insertion at end
4-insertion at position
enter your choice1
enter the no. of nodes5
enter the data2
enter the data3
enter the data4
enter the data5
enter the data6
2 -> 3 -> 4 -> 5 -> 6
1-create
2-insertion at begin
3-insertion at end
4-insertion at position
enter your choice2
enter the element to be inserted1
1 -> 2 -> 3 -> 4 -> 5 -> 6
1-create
2-insertion at begin
3-insertion at end
4-insertion at position
enter your choice3
enter the num to be inserted at the end7
1 -> 2 -> 3 -> 4 -> 5 -> 6 -> 7
1-create
2-insertion at begin
3-insertion at end
4-insertion at position
enter your choice4
enter the position of the element to be inserted6
enter the element to be inserted8
1 -> 2 -> 3 -> 4 -> 5 -> 8 -> 6 -> 7

                                           
