/*
    Merging two sorted arrays 
*/

#include <stdio.h>


int mergeTwoSortedArrays(int n,int m,int arr1[],int arr2[],int merge[])
{
    int i=0,j=0,k=0;
    
    while(i<n && j<m)
    {
        if(arr1[i] <= arr2[j])
        {
            merge[k++]=arr1[i++];
        }
        else
        {
            merge[k++]=arr2[j++];
        }
    }
    while(i<n)                           // if size of arr1 is greater than size of arr2 then only this loop will execute
    {
        merge[k++]=arr1[i++];
    }
    while(j<m)                          // if size of arr2 is greater than size of arr1 then only this loop will execute

    {
        merge[k++]=arr2[j++];
    }
}

int main() {
    int n,m;
    printf("\nHow many elements do you want in array 1:");
    scanf("%d", &n);
    printf("\nHow many elements do you want in array 2:");
    scanf("%d", &m);
    
    int arr1[n];
    int arr2[m];
    int merge[n+m];
    printf("\nEnter %d elements in array 1:", n);
    for (int i = 0; i < n; i++) 
    {
        scanf("%d", &arr1[i]);
    }
    
    printf("\nEnter %d elements in array 2:", m);
    for (int i = 0; i < m; i++) 
    {
        scanf("%d", &arr2[i]);
    }
    
    int result=mergeTwoSortedArrays(n,m,arr1,arr2,merge);
    
    printf("\nMerged Array:");
    for(int i=0;i<n+m;i++)
    {
        printf("%5d",merge[i]);
    }
    return 0;
}

