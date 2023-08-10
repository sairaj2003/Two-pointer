/*
    REMOVE DUPLICATES FROM SORTED ARRAY
*/

#include <stdio.h>

int removeDuplicates(int n,int arr[])
{
    int uniqueIndex=0;
    for(int i=1;i<n;i++)
    {
        if(arr[i] != arr[uniqueIndex])
        {
            uniqueIndex++;
            arr[uniqueIndex]=arr[i];
        }
    }
    printf("\nUnique Elements:");
    for(int i=0;i<=uniqueIndex;i++)
    {
        printf("%5d",arr[i]);
    }
    return uniqueIndex + 1;
}

int main() {
    int n;
    printf("\nHow many elements do you want in array 1:");
    scanf("%d", &n);
    
    int arr[n];
    printf("\nEnter %d elements in array :", n);
    for (int i = 0; i < n; i++) 
    {
        scanf("%d", &arr[i]);
    }
    
    int result=removeDuplicates(n,arr);
    printf("\nNumber of unique Elements in array are %d",result);
    return 0;
}

