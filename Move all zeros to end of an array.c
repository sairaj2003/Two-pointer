/*
Move all zeros to end of array
*/
#include <stdio.h>

void moveAllZeros(int n,int arr[])
{
    int nonZeroIndex=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i] != 0)
        {
            arr[nonZeroIndex]=arr[i];
            nonZeroIndex++;
        }
    }
    for(int i=nonZeroIndex;i<n;i++)
    {
        arr[i]=0;
    }
    
    printf("\nArray Elements are:");
    for(int i=0;i<n;i++)
    {
        printf("%5d",arr[i]);
    }
}

int main() {
    int n;
    printf("\nHow many elements do you want in array:");
    scanf("%d",&n);
    int arr[n];
    printf("\nEnter %d elements in array:");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }

    moveAllZeros(n,arr);
    
    return 0;
}
