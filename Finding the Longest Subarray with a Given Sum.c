/*
Finding the Longest Subarray with a Given Sum:
*/


#include <stdio.h>

int longestSubarrayWithSum(int n,int arr[],int target)
{
    int left=0;
    int currsum=0;
    int maxlength=0;
    
    for(int i=0;i<n;i++)
    {
        currsum=currsum+arr[i];
        
        while(currsum > target)
        {
            currsum=currsum-arr[left];
            left++;
        }
        
        if(currsum == target)
        {
            maxlength=(i-left+1 > maxlength) ? i-left+1 : maxlength;
        }
    }
    return maxlength;
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
    printf("\nEnter target:");
    scanf("%d",&target);
    int result=longestSubarrayWithSum(n,arr,target);
    
    printf("\nThe length of longest subarray is : %d",result);
    return 0;
}
