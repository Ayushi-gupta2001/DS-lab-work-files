/*Create by Ayushi Gupta..IT branch*/

/*Merge sorting function*/
#include<stdio.h>
void merge(int arr[], int p, int q, int r)
 {
    int x=q - p + 1;
    int y=r - q;
    /*create temp array*/
    int P[x], Q[y];

    /*loop for take values from main array to temp array L[],M[]*/
    for (int i=0;i<x;i++)
    {
        P[i]=arr[p + i];
    }
    for (int j=0;j<y;j++)
    {
        Q[j]=arr[q + 1 + j];
    }

    /*Now the initillizing the i,j,k to a[L....M]*/
    int i, j, k;
    i = 0;
    j = 0;
    k = p;
    while (i<x&&j<y)
        {
        if (P[i]<=Q[j])
        {
            arr[k]=P[i];
            i++;
        }
    else
        {
            arr[k]=Q[j];
            j++;
        }
    k++;
        }
    /*Copy the remaining element*/
    while(i<x)
    {
       arr[k]=P[i];
        i++;
        k++;
    }
    while (j<y)
    {
        arr[k]=Q[j];
        j++;
        k++;
    }
}
/*Call the function to sorted the array*/
void mergeSort(int arr[], int l, int r)
 {
  if (l<r)
    {
    int m=l+(r - l)/2;

    mergeSort(arr, l, m);
    mergeSort(arr, m + 1, r);
    merge(arr, l, m, r);
  }
}
/*Print the sorted elemet in array*/
void printArray(int arr[], int size)
{
  for (int i=0;i<size;i++)
  {
    printf("%d\n",arr[i]);
  }
  printf("\n");
}
int main()
 {
  int arr[] = {6, 5, 12, 10, 9, 1};
  int size = sizeof(arr) / sizeof(arr[0]);

  mergeSort(arr, 0, size - 1);

  printf("Sorted array: \n");
  printArray(arr, size);
}
