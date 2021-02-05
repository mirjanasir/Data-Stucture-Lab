#include<stdio.h>

void swap(int *p,int *q)
{
    int temp;
    temp=*p;
    *p=*q;
    *q=temp;
}
int sort(int array[],int p,int r)
// here p is lower value and r is higher value of the array
{
    int x=array[r];
    int i=(p-1);
    int j;
    for(j=p;j<=r-1;j++)
    {
        if (array[j]<=x)
        {
            i++;
            swap(&array[i],&array[j]);
        }
    }
    swap(&array[i+1],&array[r]);
    return(i+1);
}
void quick_sort(int array[],int p,int r)
{
    int q;
    if(p<r)
    {
        q=sort(array,p,r);
        quick_sort(array,p,q-1);
        quick_sort(array,q+1,r);
    }
}
int main()
{
    int array[100];
    int n,i,j;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
         scanf("%d",&array[i]);

    }
    //call the quick_sort function
    quick_sort(array,0,n-1);
    // print the array
    for(j=0;j<n;j++)
    {
        printf("%d",array[j]);
    }
    printf("\n");
    return 0;
}



