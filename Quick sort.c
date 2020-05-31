/*Create by Ayushi Gupta..IT branch*/
/*Quick sorting function*/

#include<stdio.h>
int partitian(int arr[],int l,int h)
{
    int i,j;
    /*first take the highest element of array*/

    int p=arr[h];
    i=l-1;
    /*Swaping the element to sorting*/

    for(j=l;j<=h-1;j++)
    {
        if(arr[j]<p)
        {
        i++;
       swap(&arr[i],&arr[j]);
        }
    }
    swap(&arr[i+1],&arr[h]);
    return (i+1);
}
void swap(int *a,int *b)
{
    int t=*a;
    *a=*b;
    *b=t;
}
void quicksort(int arr[],int l,int h)
{
    if(l<h)
    {
        int p1=partitian(arr,l,h);
        quicksort(arr,l,p1-1);
        quicksort(arr,p1+1,h);
    }
}
void main()
{
    int a[20]={10,80,60,50,20,70};
    int n;
    printf("enter the size of array");
    scanf("%d",&n);
    quicksort(a,0,n-1);
    printf("enter the sorted array is:\n");
    for(int k=0;k<=n;k++)
    {
        printf("%d\n",a[k]);
    }

}
