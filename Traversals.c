#include<stdio.h>
#include<stdlib.h>
struct node{
		int data;
		struct node *left;
		struct node *right;
		};
struct node *root = NULL,*cur,*temp;
struct node *create(){
		cur = (struct node*)malloc(sizeof(struct node));
		scanf("%d",&cur -> data);
		cur -> left = NULL;
		cur -> left = NULL;
		if(root == NULL){
			root = cur;
		}
		else{
			temp = root;
			while(temp != NULL){
				if(cur -> data < temp -> data && temp -> left == NULL){
					temp -> left = cur;
					return root;
				}
				else if(cur -> data < temp -> data && temp != NULL){
					temp = temp -> left;
				}
				else if(cur -> data > temp -> data && temp -> right == NULL){
					temp -> right = cur;
					return root;
				}
				else if(cur -> data > temp -> data && temp -> right != NULL){
					temp = temp -> right;
				}
			}
		}
	}
void preorder(struct node *root){
		if(root != NULL){
			printf("%d\n",root -> data);
			preorder(root -> left);
			preorder(root -> right);
		}
 }
void inorder(struct node *root){
		if(root != NULL){
			inorder(root -> left);
			printf("%d\n",root -> data);
			inorder(root -> right);
		}
}
void postorder(struct node *root){
		if(root != NULL){
			postorder(root -> left);
			postorder(root -> right);
			printf("%d\n",root -> data);
		}
}
int main(){
	int ch;
     printf("\n1 - create\n2 - preorder\n3 - Inorder\n4 - postorder\n5 - exit");
	 while(1){
		printf("enter your choice");
		scanf("%d",&ch);
		switch(ch){
			case 1:create();
				   break;
			case 2:preorder(root);
				   break;
			case 3:inorder(root);
				   break;
			case 4:postorder(root);
				   break;
			case 5:exit(0);
   }
}
}
//output
1 - create
2 - preorder
3 - Inorder
4 - postorder
5 - exitenter your choice1
78
enter your choice1
32
enter your choice1
60
enter your choice1
89
enter your choice1
46
enter your choice1
98
enter your choice1
28
enter your choice1
53
enter your choice2
78
32
28
60
46
53
89
98
enter your choice3
28
32
46
53
60
78
89
98
enter your choice4
28
53
46
60
32
98
89
78
enter your choice5
