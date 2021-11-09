 int i = 0;
 int linear_search(int n,int a[n],int element){
       if(a[i] == element)
           return i ;
       if(i < n){
         i++;
         linear_search(n,a,element);
       }
       if(i >= n)
         return -1;
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
       printf("element found at %d",pos+1);
  }
 
//input and output
enter the no. of elements in an array5    
enter the array elements2
5
6
8
4
enter the element to be searched5
element found at 2
enter the no. of elements in an array4
enter the array elements2
4
6
8
enter the element to be searched9
element not found
                                         
