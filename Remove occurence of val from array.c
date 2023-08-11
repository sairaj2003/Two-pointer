/*
remove occurence of 'val' from array 'arr''
*/
#include <stdio.h>

int removeVal(int n,int arr[],int val)
{
    int notval=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i] != val)
        {
            arr[notval]=arr[i];
            notval++;
        }
    }
    printf("\nArray after removing %d modified array is:",val);
    for(int i=0;i<notval;i++)
    {
        printf("%5d",arr[i]);
    }
}
int main() {
    int n,val;
    printf("\nEnter how many elements do you want in array:");
    scanf("%d",&n);
    int arr[n];
    printf("\nEnter %d elements in array",n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("\nEnter target value which you want to remove from array:");
    scanf("%d",&val);
    removeVal(n,arr,val);
    return 0;
}
