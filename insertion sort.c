/*Create by Ayushi Gupta..IT branch*/
/*Insertion sorting function*/

#include<stdio.h>
void Insertingalgo(int A[],int n)
{
    int i,j;
    int key;
    for(j=2;j<n;j++)
    {
        key=A[j];
        i=j-1;
        while(i>0&&A[i]>key);
        {
            A[i+1]=A[i];
            i=i-1;
        }
        A[i+1]=key;
    }
}
void main()
{
    int a[]={4,1,5,3,2};
    int L=sizeof(a)/sizeof(a[0]);
    printf("Length of the array is %d\n",L);
    Insertingalgo(a,L);
    printf("Now the inserted array is:");
    for(int p=0;p<L;p++)
    {
        printf("%d\n",a[p]);
    }
}
