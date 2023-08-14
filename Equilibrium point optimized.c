// Online C compiler to run C program online
/*
Given an array A of n positive numbers. The task is to find the first equilibrium point in an array. Equilibrium point in an array is a position such that the sum of elements before it is equal to the sum of elements after it.

Example 1:

Input: 
n = 5 
A[] = {1,3,5,2,2} 
Output: 
3 
Explanation:  
equilibrium point is at position 3 as sum of elements before it (1+3) = sum of elements after it (2+2). 

*/
#include <stdio.h>

void equilibriumElm(int n,int arr[])
{
    int totalsum=0;
    int leftsum=0;
    int flag=0;
    for(int i=0;i<n;i++)
    {
        totalsum=totalsum+arr[i];
    }
    
    for(int i=0;i<n;i++)
    {
        totalsum=totalsum-arr[i];
        
        if(totalsum == leftsum)
        {
            printf("\nElement:%d",arr[i]);
            flag=1;
            return 0;
        }
        
        leftsum=leftsum+arr[i];
    }
    
    if(flag==0)
    {
        printf("\nNo such element..");
    }
}

int main() {
    int n;
    printf("\nHow many elements do you want in array:");
    scanf("%d",&n);
    int arr[n];
    
    printf("\nEnter %d elements in array",n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    
    equilibriumElm(n,arr);
    return 0;
}
