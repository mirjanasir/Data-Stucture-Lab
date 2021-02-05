#include<stdio.h>
int main(){
int a[]={-3,-2,-4,-5,6,7,8,9,10};
int searchItem=-5;
int i;
for(i=0; i<9; i++){
    if(a[i]== searchItem){
        printf("item found at index:%d\n", i);
        return 0;
    }
}
printf("item not found.\n");

return 0;
}


