/*
Rearrange Array Alternately
Given a sorted array of positive integers. Your task is to rearrange the array elements alternatively i.e first element should be max value, second should be min value, third should be second max, fourth should be second min and so on.
Note: Modify the original array itself. Do it without using any extra space. You do not have to return anything.

Example 1:

Input:
n = 6
arr[] = {1,2,3,4,5,6}
Output: 6 1 5 2 4 3
Explanation: Max element = 6, min = 1, 
second max = 5, second min = 2, and 
so on... Modified array is : 6 1 5 2 4 3.
Example 2:

Input:
n = 11
arr[]={10,20,30,40,50,60,70,80,90,100,110}
Output:110 10 100 20 90 30 80 40 70 50 60
Explanation: Max element = 110, min = 10, 
second max = 100, second min = 20, and 
so on... Modified array is : 
110 10 100 20 90 30 80 40 70 50 60.
*/

#include <stdio.h>

void rearrangeElements(int n, int arr[]) 
{
    int temp[n];
    
    int evenIndex = n - 1;
    int oddIndex = 0;
    
    for (int i = 0; i < n; i++) 
    {
        if (i % 2 == 0) 
        {
            temp[i] = arr[evenIndex];
            evenIndex--;
        } 
        else 
        {
            temp[i] = arr[oddIndex];
            oddIndex++;
        }
    }

    printf("\nArray after rearrangement:");
    for (int i = 0; i < n; i++) 
    {
        printf("%5d", temp[i]);
    }
}

int main() {
    int n;
    printf("\nEnter how many elements do you want in the array:");
    scanf("%d", &n);
    int arr[n];
    printf("\nEnter %d elements in the array:", n);
    for (int i = 0; i < n; i++) 
    {
        scanf("%d", &arr[i]);
    }

    rearrangeElements(n, arr); 
    return 0;
}
