/*
    in built sort function
*/
#include <stdio.h>
#include<stdlib.h>

int compare(void *a,void *b)
{
    return(*(int *)a - *(int *)b);
}
int main() {
    int n;
    int target;
    printf("\nHow many elements do you want in array:");
    scanf("%d", &n);
    
    int arr[n];
    printf("\nEnter %d elements in array:", n);
    for (int i = 0; i < n; i++) 
    {
        scanf("%d", &arr[i]);
    }
    printf("\narray before sorting:");
    for(int i=0;i<n;i++)
    {
        printf("%5d",arr[i]);
    }
    
    qsort(arr,n,sizeof(int),compare);
    
    printf("\narray before sorting:");
    for(int i=0;i<n;i++)
    {
        printf("%5d",arr[i]);
    }
    
    return 0;
}

