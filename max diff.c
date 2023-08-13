/*
Given an array arr[] of integers, find out the maximum difference between any two elements such that the larger element appears after the smaller number.

Examples :
Input : arr = {2, 3, 10, 6, 4, 8, 1}
Output : 8
Explanation : The maximum difference is between 10 and 2.

Input : arr = {7, 9, 5, 6, 3, 2}
Output : 2
Explanation : The maximum difference is between 9 and 7.
*/
#include <stdio.h>

void maxDiff(int n,int arr[])
{
    int maxdiff=0;
    for(int i=0;i<n;i++)
    {
        int currdiff=0;
        int start=0;
        
        currdiff=arr[i]-arr[start];
        if(currdiff > maxdiff)
        {
            maxdiff=currdiff;
        }
    }
    printf("\nMax diff:%d",maxdiff);
}

int main() {
    int n;
    printf("\nHow many elements do you want in array:");
    scanf("%d",&n);
    int arr[n];
    
    printf("\nEnter %d elements in array:",n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    
    maxDiff(n,arr);
    return 0;
}
