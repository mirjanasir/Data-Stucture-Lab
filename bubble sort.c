#include<stdio.h>
int main()
{
    int a[]={12,2,5,3,10};
    int i,j, size = 5;

    for(i=0; i < size-1; i++){
        for(j = 0; j < size-1 ; j++){
            if(a[j] > a [j+1]){
                //swap two numbers
                int temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;


            }
        }
    }
    printf("after sorting:\n");
    for(i=0; i<size;i++){
        printf("%d",a[i]);
    }
    printf("\n");
    return 0;
}
