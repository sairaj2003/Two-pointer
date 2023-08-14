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
    int flag=0;
    for(int i=1;i<n;i++)
    {
        int left=0;
        int right=i+1;
        int sum1=0;
        int sum2=0;
        while(left < i)
        {
            sum1=sum1+arr[left];
            left++;
        }
        
        while(right < n)
        {
            sum2=sum2+arr[right];
            right++;
        }
        
        if(sum1==sum2)
        {
            printf("\nElement:%d",arr[i]);
            printf("\nIndex:%d",i);
            flag=1;
        }
    }
    
    if(flag==0)
    {
        printf("\nMo such element exists...");
    }
    return 0;
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
