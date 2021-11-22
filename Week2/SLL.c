#include<stdio.h>
#include<stdlib.h>
struct node{
     int data;
     struct node *link;
    };
 struct node *head = NULL,*cur,*temp,*temp1;
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
 }
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
//deletion
struct node* delete_begin(struct node*head){
        temp = head;
        head = temp -> link;
        printf("deleted element %d",temp -> data);
        free(temp);
return head;
}
struct node* delete_end(struct node*head){
        temp = head;
        while(temp != NULL){
            temp1 = temp;
            temp = temp -> link;
            }
        temp1 -> link = NULL;
        printf("deleted element %d",temp -> data);
        free(temp);
return head;
}
struct node* delete_position(struct node*head,int pos){
        temp = head;
        int c = 1;
        while(c < pos){
            temp1 = temp;
            temp = temp -> link;
            c++;
        }
        temp1 -> link = temp -> link;
        printf("deleted element %d",temp -> data);
        free(temp);
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
//reverse display
void reverse_display(struct node*head){
            if(head != NULL){
                reverse_display(head -> link);
                printf("%d",head -> data);
            }
}
int search(struct node*head,int key){
            int c = 1;
            temp = head;
            while(temp != NULL){
                if(key == temp -> data){
                    return c;
                }
                temp = temp -> link;
                c++;
            }
return -1;
}

struct node* sorting(struct node*head){
            temp = head;
            int x;
            while(temp != NULL){
                temp1 = head;
                while(temp1 != NULL){
                    if(temp1 -> data > temp1 -> link -> data){
                        x = temp1 -> data;
                        temp1 -> data = temp1 -> link -> data;
                        temp1 -> link -> data = x;
                    }
                    temp1 = temp1 -> link;
                }
                temp = temp -> link;
            }
}
 int main(){
       int ele,ch,pos,key;
       while(1){
          printf("\n1-create\n2-insertion at begin\n3-insertion at end\n4-insertion at position\n5-delete at begin\n6-delete at end\n7-delete at position\n8-display\n9-reverse display\n10-seraching\n11-sorting\n");
          printf("enter your choice");
          scanf("%d",&ch);
          switch(ch){
              case 1:head = create();
                    break;
              case 2:printf("enter the element to be inserted");
                    scanf("%d",&ele);
                    head = insert_begin(ele);
                    break;
              case 3:printf("enter the num to be inserted at the end");
                    scanf("%d",&ele);
                    head = insert_end(ele);
                    break;
              case 4:printf("enter the position of the element to be inserted");
                    scanf("%d",&pos);
                    printf("enter the element to be inserted");
                    scanf("%d",&ele);
                    head = insert_position(pos,ele);
                    break;
              case 5:head = delete_begin(head);
                     break;
              case 6:head = delete_end(head);
                     break;
              case 7:printf("enter the postion of the element to be deleted");
                     scanf("%d",&pos);
                     head = delete_position(head,pos);
                     break;
              case 8:display(head);
                     break;
              case 9:reverse_display(head);
                     break;
              case 10:printf("enter the element to be searched");
                      scanf("%d",&key);
                      pos = search(head,key);
                      if(pos == -1)
                         printf("element not found");
                      else
                         printf("element found at position %d",pos);
                      break;
              case 11:head = sorting(head);
                      break;
              case 12:exit(0);
          }
       }
 }

//output         
1-create
2-insertion at begin
3-insertion at end
4-insertion at position
5-delete at begin
6-delete at end
7-delete at position
8-display
9-reverse display
10-seraching
11-sorting
enter your choice1
enter the no. of nodes3
enter the data3
enter the data4
enter the data5

1-create
2-insertion at begin
3-insertion at end
4-insertion at position
5-delete at begin
6-delete at end
7-delete at position
8-display
9-reverse display
10-seraching
11-sorting
enter your choice8
3 -> 4 -> 5
1-create
2-insertion at begin
3-insertion at end
4-insertion at position
5-delete at begin
6-delete at end
7-delete at position
8-display
9-reverse display
10-seraching
11-sorting
enter your choice2
enter the element to be inserted2

1-create
2-insertion at begin
3-insertion at end
4-insertion at position
5-delete at begin
6-delete at end
7-delete at position
8-display
9-reverse display
10-seraching
11-sorting
enter your choice8
2 -> 3 -> 4 -> 5
1-create
2-insertion at begin
3-insertion at end
4-insertion at position
5-delete at begin
6-delete at end
7-delete at position
8-display
9-reverse display
10-seraching
11-sorting
enter your choice3
enter the num to be inserted at the end6

1-create
2-insertion at begin
3-insertion at end
4-insertion at position
5-delete at begin
6-delete at end
7-delete at position
8-display
9-reverse display
10-seraching
11-sorting
enter your choice8
2 -> 3 -> 4 -> 5 -> 6
1-create
2-insertion at begin
3-insertion at end
4-insertion at position
5-delete at begin
6-delete at end
7-delete at position
8-display
9-reverse display
10-seraching
11-sorting
enter your choice4
enter the position of the element to be inserted3
enter the element to be inserted50

1-create
2-insertion at begin
3-insertion at end
4-insertion at position
5-delete at begin
6-delete at end
7-delete at position
8-display
9-reverse display
10-seraching
11-sorting
enter your choice8
2 -> 3 -> 50 -> 4 -> 5 -> 6
1-create
2-insertion at begin
3-insertion at end
4-insertion at position
5-delete at begin
6-delete at end
7-delete at position
8-display
9-reverse display
10-seraching
11-sorting
enter your choice5
deleted element 2
1-create
2-insertion at begin
3-insertion at end
4-insertion at position
5-delete at begin
6-delete at end
7-delete at position
8-display
9-reverse display
10-seraching
11-sorting
enter your choice8
3 -> 50 -> 4 -> 5 -> 6



