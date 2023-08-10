/*
finding a pair of elements in a sorted array that sum up to a given target value.
*/


#include <stdio.h>

void sumPair(int n, int arr[], int target) {
    int left = 0;
    int right = n - 1;
    
    while (left < right) {
        int sum = arr[left] + arr[right];
        if (sum == target) 
        {
            printf("\nPair : [%d , %d]", arr[left], arr[right]);
            break;
        } 
        else if (sum > target) 
        {
            right--; 
        } 
        else 
        {
            left++;
        }
    }
    
    if (left >= right) 
    {
        printf("\nNo pairs found...");
    }
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
    printf("\nEnter target value:");
    scanf("%d", &target);
    sumPair(n, arr, target);
    return 0;
}
