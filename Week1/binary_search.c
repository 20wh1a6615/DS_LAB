#include<stdio.h>
int binary_search(int n,int a[],int element){
int low = 0,high = n - 1,mid;
  mid = (low + high) / 2;
  while(low <= high){
    mid = (low + high) / 2;
    if(a[mid] < element)
          low = mid + 1;
    if(a[mid] > element)
          high = mid -1;
    if(a[mid] == element)
          return mid;
 }
  return -1;
 }
 int main(){
 int n,i,a[20],low,high,mid;
 int element,pos;
 printf("enter the no. of ele of an array");
 scanf("%d",&n);
 printf("enter the sorted array elements");
 for(i = 0;i < n;i++)
    scanf("%d",&a[i]);
 printf("enter the element to be searced");
 scanf("%d",&element);
 pos = binary_search(n,a,element);
 if(pos == -1)
   printf("element not found");
 else
   printf("element found at %d",pos+1);
  }
//input and output
enter the no. of ele of an array4
enter the sorted array elements3
5
7
9
enter the element to be searced9
element found at 4
enter the no. of ele of an array6
enter the sorted array elements2
7
8 
9
10
17
enter the element to be searced18
element not found
