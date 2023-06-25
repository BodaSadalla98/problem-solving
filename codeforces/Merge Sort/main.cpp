#include <iostream>
#include<bits/stdc++.h>
using namespace std;
// int arr[] = {12, 11, 13, 5, 6, 7};
int *Merge(int arr[], int l, int m,  int h){
            int s1= m-l+1;
            int s2= h-m;
        int L[s1], R[s2];
        for (int i = 0; i < s1; i++)
        L[i] = arr[l + i];
        for (int j = 0; j < s2; j++)
        R[j] = arr[m + 1+ j];
        int k = l;
            int i=0,j=0;
            while(i<s1 && j<s2){
                if(L[i]<R[j]){
                        arr[k]=L[i];
                        i++;
                    }
                else
                {
                        arr[k]=R[j];
                        j++;
                }
                    k++;


            }
    while (i < s1)
    {
        arr[k] = L[i];
        i++;
        k++;
    }

    while (j < s2)
    {
        arr[k] = R[j];
        j++;
        k++;
    }


return arr;

}

int * mergeSort(int arr[], int low, int high){
        if(low>=high)return 0;
            int mid = (low+high)/2;
            mergeSort(arr, low, mid);
            mergeSort(arr,mid+1,high);
         return    Merge(arr, low, mid, high);



}
void printArray(int A[], int size)
{
    int i;
    for (i=0; i < size; i++)
        printf("%d ", A[i]);
    printf("\n");
}

int main()
{
    int arr[] = {12, 11, 13, 5, 6, 7};
    int arr_size = sizeof(arr)/sizeof(arr[0]);

    printf("Given array is \n");
    printArray(arr, arr_size);

  int *a= mergeSort(arr, 0, arr_size - 1);

    printf("\nSorted array is \n");
    printArray(a, arr_size);
    return 0;
}
