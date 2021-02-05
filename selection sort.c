#include<stdio.h>
int main()
{
    int a[]={4,8,7,6,5,9,3};
    int i,j, min_index;
    //outer loop to iterate over all the numbers
    for(i=0; i<7;i++){
        //iner loop to find the minumum index
        for(j = i+1; j<7; j++){
            if(a[j] < a[min_index]){
                min_index=j;
            }
        }
        //swap two numbers(i,min_index)
        int temp=a[i];
        a[i]=a[min_index];
        a[min_index]=temp;
    }

    //print the sorted  array
    for(i=0; i<7;i++){
        printf("%d",a[i]);
    }
    printf("\n\n");


    return 0;

}

