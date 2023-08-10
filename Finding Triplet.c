/*
    finding a triplet in an array that sums up to a given target value. 
*/
#include <stdio.h>
int threeSum(int n,int arr[],int target)
{
    for(int i=0;i<n;i++)
    {
        int left=i+1;
        int right=n-1;
      
        
        while(left < right)
        {
            int sum=arr[i] + arr[left] + arr[right];
            
            if(target == sum)
            {
                printf("\nIndices are:[%d , %d , %d]",i,left,right);
                printf("\nValues are: [%d , %d , %d]",arr[i],arr[left],arr[right]);
                return 1;
            }
            else if(sum > target)
            {
                right--;
            }
            else
            {
                left++;
            }
        }
    }
    return 0;
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
    
    int result=threeSum(n,arr,target);
    if(result==0)
    {
        printf("\No pairs found...");
    }
    return 0;
}
