 int linear_search(int n,int a[n],int element){
 int pos = -1;
        for(int i = 0;i < n;i++){
           if(a[i] == element){
             pos = i;
             break;
             }
           }
       if(pos == -1)
         return -1;
       else
         return pos;
     }
 #include<stdio.h>
 int main(){
 int n,pos,a[30],element,i;
 printf("enter the no. of elements in an array");
 scanf("%d",&n);
 printf("enter the array elements");
     for(i = 0;i < n;i++)
         scanf("%d",&a[i]);
 printf("enter the element to be searched");
 scanf("%d",&element);
 pos = linear_search(n,a,element);
      if(pos == -1)
         printf("element not found");
      else
         printf("element found at %d",pos + 1);
  }
\\input and output
enter the no. of elements in an array4
enter the array elements3
5
2
6
enter the element to be searched6
element found at 4
enter the no. of elements in an array6
enter the array elements3
5
8
9
1
2
enter the element to be searched7
element not found
