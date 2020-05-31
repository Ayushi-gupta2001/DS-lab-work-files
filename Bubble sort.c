/*Create by Ayushi Gupta..IT branch*/
/*Bubble sorting function*/

#include<stdio.h>
void bubblesortalgo(int A[],int n)
{
    int i,j;
    int key;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if(A[j]>A[j+1])
            {
                key=A[j];
                A[j]=A[j+1];
                A[j+1]=key;
            }
        }
    }
}
void main()
{
    int a[]={64,34,25,12,10};
    int L=sizeof(a)/sizeof(a[0]);
    printf("Length of the array is %d\n",L);
    bubblesortalgo(a,L);
    printf("Now the bubble sorted array is:");
    for(int k=0;k<L;k++)
    {
        printf("%d\n",a[k]);
    }
}
