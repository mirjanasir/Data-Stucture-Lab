#include<stdio.h>
int main(){
 int a[]={100, 300, 400, 600, 800, 1000, 1200};
  int item=100;

  int left,right,middle;
  left=0;
  right=6;

  while( left<=right)
  {
      middle=(right+left)/2;
      if(a[middle]==item){
        printf("item found at index: %d\n",middle);
        return 0;
      }
      else if(a[middle]<item){
        left=middle+1;
      }
      else
      {
          right=middle-1;
      }
  }
  printf("item not found\n");

  return 0;
}


