/*
Leaders in an array

Given an array A of positive integers. Your task is to find the leaders in the array. An element of array is leader if it is greater than or equal to all the elements to its right side. The rightmost element is always a leader. 

Example 1:

Input:
n = 6
A[] = {16,17,4,3,5,2}
Output: 17 5 2
Explanation: The first leader is 17 
as it is greater than all the elements
to its right.  Similarly, the next 
leader is 5. The right most element 
is always a leader so it is also 
included.
*/

#include <stdio.h>

void findLeaderElements(int n, int arr[]) {
    int maxRight = arr[n - 1]; // The rightmost element is always a leader

    printf("Leader Elements: %d ", maxRight);

    for (int i = n - 2; i >= 0; i--) {
        if (arr[i] > maxRight) {
            maxRight = arr[i];
            printf("%d ", maxRight);
        }
    }
}

int main() {
    int n;
    printf("Enter how many elements do you want in the array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements in the array: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    findLeaderElements(n, arr);

    return 0;
}
